// rea decompile_all
// name: UniRx.Examples.Sample10_MainThreadDispatcher$$Run
// address: 0x4193e00
// body: available
// range: 0x4193e00-0x4194283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4194280 to 0x4c4b894 FUN_04c4b894 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_Examples_Sample10_MainThreadDispatcher__Run(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_095167c0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174850);
    FUN_03f5c2a4(&DAT_091747c8);
    FUN_03f5c2a4(&DAT_09174b00);
    FUN_03f5c2a4(&DAT_09177eb8);
    FUN_03f5c2a4(&DAT_09177be0);
    FUN_03f5c2a4(&DAT_09187d70);
    FUN_03f5c2a4(&DAT_091d53a8);
    FUN_03f5c2a4(&DAT_091d5360);
    FUN_03f5c2a4(&DAT_091d53c8);
    FUN_03f5c2a4(&DAT_091d5230);
    FUN_03f5c2a4(&DAT_091d5278);
    FUN_03f5c2a4(&DAT_09188b78);
    FUN_03f5c2a4(&DAT_091d83c8);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_091ef708);
    FUN_03f5c2a4(&DAT_091ef710);
    FUN_03f5c2a4(&DAT_091ef718);
    FUN_03f5c2a4(&DAT_091ef720);
    FUN_03f5c2a4(&DAT_091940f8);
    DAT_095167c0 = 1;
  }
  uVar1 = UniRx_Examples_Sample10_MainThreadDispatcher__TestAsync();
  if (*(int *)(DAT_09187d70 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09187d70);
  }
  UniRx_MainThreadDispatcher__StartCoroutine(uVar1,0);
  uVar1 = thunk_FUN_03f9944c(DAT_09177be0);
  FUN_053017a8(uVar1,param_1,DAT_091d83c8,0);
  if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UniRx_Observable__FromCoroutine(uVar1,0,0);
  FUN_04c4aebc(uVar1,DAT_091d5360);
  if (*(int *)(DAT_091940f8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar3 = *(undefined8 **)(DAT_091940f8 + 0xb8);
  lVar4 = puVar3[1];
  if (lVar4 == 0) {
    if (*(int *)(DAT_091940f8 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar3 = *(undefined8 **)(DAT_091940f8 + 0xb8);
    }
    uVar1 = *puVar3;
    lVar4 = thunk_FUN_03f9944c(DAT_09174850);
    FUN_070a8c30(lVar4,uVar1,DAT_091ef708,0);
    plVar2 = (long *)(*(long *)(DAT_091940f8 + 0xb8) + 8);
    *plVar2 = lVar4;
    thunk_FUN_03f5d7b8(plVar2,lVar4);
  }
  if (*(int *)(DAT_09187d70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UniRx_MainThreadDispatcher__Post(lVar4,0,0);
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_TimeSpan__FromSeconds(0x3ff0000000000000,0);
  if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188b78);
  }
  uVar1 = UniRx_Observable__Interval(uVar1,0);
  if (*(int *)(DAT_091940f8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091940f8);
  }
  puVar3 = *(undefined8 **)(DAT_091940f8 + 0xb8);
  lVar4 = puVar3[2];
  if (lVar4 == 0) {
    if (*(int *)(DAT_091940f8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091940f8);
      puVar3 = *(undefined8 **)(DAT_091940f8 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = thunk_FUN_03f9944c(DAT_091747c8);
    FUN_070a76e8(lVar4,uVar5,DAT_091ef710,0);
    plVar2 = (long *)(*(long *)(DAT_091940f8 + 0xb8) + 0x10);
    *plVar2 = lVar4;
    thunk_FUN_03f5d7b8(plVar2,lVar4);
  }
  FUN_04c4b494(uVar1,lVar4,DAT_091d53a8);
  if (*(int *)(DAT_091940f8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar3 = *(undefined8 **)(DAT_091940f8 + 0xb8);
  lVar4 = puVar3[3];
  if (lVar4 == 0) {
    if (*(int *)(DAT_091940f8 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar3 = *(undefined8 **)(DAT_091940f8 + 0xb8);
    }
    uVar1 = *puVar3;
    lVar4 = thunk_FUN_03f9944c(DAT_09177eb8);
    FUN_05303608(lVar4,uVar1,DAT_091ef718,0);
    plVar2 = (long *)(*(long *)(DAT_091940f8 + 0xb8) + 0x18);
    *plVar2 = lVar4;
    thunk_FUN_03f5d7b8(plVar2,lVar4);
  }
  if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = FUN_04c44f10(lVar4,DAT_091d5278);
  uVar1 = FUN_04c40530(uVar1,DAT_091d5230);
  if (*(int *)(DAT_091940f8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091940f8);
  }
  puVar3 = *(undefined8 **)(DAT_091940f8 + 0xb8);
  lVar4 = puVar3[4];
  if (lVar4 == 0) {
    if (*(int *)(DAT_091940f8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091940f8);
      puVar3 = *(undefined8 **)(DAT_091940f8 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = thunk_FUN_03f9944c(DAT_09174b00);
    FUN_071c4940(lVar4,uVar5,DAT_091ef720,0);
    plVar2 = (long *)(*(long *)(DAT_091940f8 + 0xb8) + 0x20);
    *plVar2 = lVar4;
    thunk_FUN_03f5d7b8(plVar2,lVar4);
  }
  FUN_04c4b894(uVar1,lVar4,DAT_091d53c8);
  return;
}

