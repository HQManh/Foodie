// rea decompile_all
// name: UniRx.Examples.Sample04_ConvertFromUnityCallback$$Awake
// address: 0x4190cfc
// body: available
// range: 0x4190cfc-0x419103f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x419103c to 0x4c4b694 FUN_04c4b694 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_Examples_Sample04_ConvertFromUnityCallback__Awake(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_0951679a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174bb8);
    FUN_03f5c2a4(&DAT_09179500);
    FUN_03f5c2a4(&DAT_091d53d0);
    FUN_03f5c2a4(&DAT_091d5320);
    FUN_03f5c2a4(&DAT_09188b78);
    FUN_03f5c2a4(&DAT_091ef620);
    FUN_03f5c2a4(&DAT_091ef628);
    FUN_03f5c2a4(&DAT_091ef630);
    FUN_03f5c2a4(&DAT_091ef638);
    FUN_03f5c2a4(&DAT_09194088);
    DAT_0951679a = 1;
  }
  uVar1 = UniRx_Examples_Sample04_ConvertFromUnityCallback_LogHelper__LogCallbackAsObservable();
  if (*(int *)(DAT_09194088 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09194088);
  }
  puVar3 = *(undefined8 **)(DAT_09194088 + 0xb8);
  lVar4 = puVar3[1];
  if (lVar4 == 0) {
    if (*(int *)(DAT_09194088 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09194088);
      puVar3 = *(undefined8 **)(DAT_09194088 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = thunk_FUN_03f9944c(DAT_09179500);
    FUN_05322d94(lVar4,uVar5,DAT_091ef620,0);
    plVar2 = (long *)(*(long *)(DAT_09194088 + 0xb8) + 8);
    *plVar2 = lVar4;
    thunk_FUN_03f5d7b8(plVar2,lVar4);
  }
  if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = FUN_04c49080(uVar1,lVar4,DAT_091d5320);
  if (*(int *)(DAT_09194088 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09194088);
  }
  puVar3 = *(undefined8 **)(DAT_09194088 + 0xb8);
  lVar4 = puVar3[2];
  if (lVar4 == 0) {
    if (*(int *)(DAT_09194088 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09194088);
      puVar3 = *(undefined8 **)(DAT_09194088 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = thunk_FUN_03f9944c(DAT_09174bb8);
    FUN_070a8c30(lVar4,uVar5,DAT_091ef628,0);
    plVar2 = (long *)(*(long *)(DAT_09194088 + 0xb8) + 0x10);
    *plVar2 = lVar4;
    thunk_FUN_03f5d7b8(plVar2,lVar4);
  }
  FUN_04c4b694(uVar1,lVar4,DAT_091d53d0);
  uVar1 = UniRx_Examples_Sample04_ConvertFromUnityCallback_LogHelper__LogCallbackAsObservable();
  if (*(int *)(DAT_09194088 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09194088);
  }
  puVar3 = *(undefined8 **)(DAT_09194088 + 0xb8);
  lVar4 = puVar3[3];
  if (lVar4 == 0) {
    if (*(int *)(DAT_09194088 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09194088);
      puVar3 = *(undefined8 **)(DAT_09194088 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = thunk_FUN_03f9944c(DAT_09179500);
    FUN_05322d94(lVar4,uVar5,DAT_091ef630,0);
    plVar2 = (long *)(*(long *)(DAT_09194088 + 0xb8) + 0x18);
    *plVar2 = lVar4;
    thunk_FUN_03f5d7b8(plVar2,lVar4);
  }
  if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = FUN_04c49080(uVar1,lVar4,DAT_091d5320);
  if (*(int *)(DAT_09194088 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09194088);
  }
  puVar3 = *(undefined8 **)(DAT_09194088 + 0xb8);
  lVar4 = puVar3[4];
  if (lVar4 == 0) {
    if (*(int *)(DAT_09194088 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09194088);
      puVar3 = *(undefined8 **)(DAT_09194088 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = thunk_FUN_03f9944c(DAT_09174bb8);
    FUN_070a8c30(lVar4,uVar5,DAT_091ef638,0);
    plVar2 = (long *)(*(long *)(DAT_09194088 + 0xb8) + 0x20);
    *plVar2 = lVar4;
    thunk_FUN_03f5d7b8(plVar2,lVar4);
  }
  FUN_04c4b694(uVar1,lVar4,DAT_091d53d0);
  return;
}

