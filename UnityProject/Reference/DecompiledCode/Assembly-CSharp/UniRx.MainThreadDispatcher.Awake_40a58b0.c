// rea decompile_all
// name: UniRx.MainThreadDispatcher$$Awake
// address: 0x40a58b0
// body: available
// range: 0x40a58b0-0x40a5cff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40a5b88 to 0x8662eec UnityEngine.Object$$DontDestroyOnLoad (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40a5c40 to 0x40a5ea4 UniRx.MainThreadDispatcher$$DestroyDispatcher (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40a5ccc to 0x40a6060 UniRx.MainThreadDispatcher$$CullAllExcessDispatchers (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40a5cfc to 0x85f7548 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_MainThreadDispatcher__Awake(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  if ((DAT_09515e4b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174688);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091d2840);
    FUN_03f5c2a4(&DAT_091d2848);
    FUN_03f5c2a4(&DAT_091d2850);
    FUN_03f5c2a4(&DAT_09187d70);
    FUN_03f5c2a4(&DAT_09188260);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09188ac8);
    FUN_03f5c2a4(&DAT_09210470);
    FUN_03f5c2a4(&DAT_09210460);
    FUN_03f5c2a4(&DAT_09210468);
    DAT_09515e4b = 1;
  }
  if (*(int *)(DAT_09187d70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = *(undefined8 *)(*(long *)(DAT_09187d70 + 0xb8) + 8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_09187d70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar2 = (long *)(*(long *)(DAT_09187d70 + 0xb8) + 8);
    *plVar2 = param_1;
    thunk_FUN_03f5d7b8(plVar2,param_1);
    uVar6 = thunk_FUN_03f9944c(DAT_09188ac8);
    System_Object___ctor(uVar6,0);
    puVar3 = (undefined8 *)FUN_03f5c2c0(DAT_09187d70);
    *puVar3 = uVar6;
    uVar4 = FUN_03f5c2c0(DAT_09187d70);
    thunk_FUN_03f5d7b8(uVar4,uVar6);
    uVar6 = DAT_09174688;
    *(undefined1 *)(*(long *)(DAT_09187d70 + 0xb8) + 0x10) = 1;
    uVar6 = thunk_FUN_03f9944c(uVar6);
    FUN_070a8c30(uVar6,param_1,DAT_091d2840,0);
    uVar4 = thunk_FUN_03f9944c(DAT_09188260);
    UniRx_InternalUtil_MicroCoroutine___ctor(uVar4,uVar6,0);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar4);
    uVar6 = thunk_FUN_03f9944c(DAT_09174688);
    FUN_070a8c30(uVar6,param_1,DAT_091d2848,0);
    uVar4 = thunk_FUN_03f9944c(DAT_09188260);
    UniRx_InternalUtil_MicroCoroutine___ctor(uVar4,uVar6,0);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),uVar4);
    uVar6 = thunk_FUN_03f9944c(DAT_09174688);
    FUN_070a8c30(uVar6,param_1,DAT_091d2850,0);
    uVar4 = thunk_FUN_03f9944c(DAT_09188260);
    UniRx_InternalUtil_MicroCoroutine___ctor(uVar4,uVar6,0);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),uVar4);
    UniRx_MainThreadDispatcher__RunUpdateMicroCoroutine(param_1);
    UniRx_MainThreadDispatcher__StartCoroutine();
    UniRx_MainThreadDispatcher__RunFixedUpdateMicroCoroutine(param_1);
    UniRx_MainThreadDispatcher__StartCoroutine();
    UniRx_MainThreadDispatcher__RunEndOfFrameMicroCoroutine(param_1);
    UniRx_MainThreadDispatcher__StartCoroutine();
    uVar6 = UnityEngine_Component__get_gameObject(param_1,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    UnityEngine_Object__DontDestroyOnLoad(uVar6,0);
    return;
  }
  if (*(int *)(DAT_09187d70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = *(undefined8 *)(*(long *)(DAT_09187d70 + 0xb8) + 8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar1 = UnityEngine_Object__op_Inequality(param_1,uVar6,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_09187d70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar5 = **(int **)(DAT_09187d70 + 0xb8);
    if (iVar5 == 1) {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogWarning(DAT_09210470,0);
      if (*(int *)(DAT_09187d70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UniRx_MainThreadDispatcher__DestroyDispatcher(param_1);
      return;
    }
    if (*(int *)(DAT_09187d70 + 0xe4) == 0) {
      FUN_03f5c424();
      iVar5 = **(int **)(DAT_09187d70 + 0xb8);
    }
    if (iVar5 == 2) {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogWarning(DAT_09210468,0);
      if (*(int *)(DAT_09187d70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UniRx_MainThreadDispatcher__CullAllExcessDispatchers();
      return;
    }
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarning(DAT_09210460,0);
    return;
  }
  return;
}

