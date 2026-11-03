struct RuntimeState
{
    int initialized;
    int ready;

    void init();
};

RuntimeState* __cdecl sub_520080();

// FUNCTION: 0x5193A0 getInitializedState
RuntimeState* __cdecl getInitializedState()
{
    RuntimeState* state = sub_520080();
    if (!state->initialized) {
        state->init();
        state->initialized = 1;
    }
    return state;
}
