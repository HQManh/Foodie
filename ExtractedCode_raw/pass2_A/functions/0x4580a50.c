// rea decompile_all
// name: EssentialSystemR1.OnlineTimeCheck$$DrawOffsetButtonPair
// address: 0x4580a50
// body: available
// range: 0x4580a50-0x4580cdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void EssentialSystemR1_OnlineTimeCheck__DrawOffsetButtonPair
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_48;
  
  local_48 = param_3;
  if ((DAT_09518925 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c01c8);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_091f8a40);
    FUN_03f5c2a4(&DAT_091f86b0);
    DAT_09518925 = 1;
  }
  lVar1 = DAT_091c01c8;
  lVar5 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar5 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar5 = *(long *)(lVar1 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  UnityEngine_GUILayout__BeginHorizontal(**(undefined8 **)(lVar1 + 0xb8),0);
  uVar2 = System_String__Concat(DAT_091f8a40,param_2,0);
  if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188c20);
  }
  uVar3 = EssentialSystemR1_OnlineTimeCheck__StepButtonStyle();
  lVar1 = DAT_091c01c8;
  lVar5 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar5 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar5 = *(long *)(lVar1 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  uVar4 = UnityEngine_GUILayout__Button(uVar2,uVar3,**(undefined8 **)(lVar1 + 0xb8),0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_TimeSpan__Negate(&local_48,0);
    EssentialSystemR1_OnlineTimeCheck__AdjustDraftTime(param_1,uVar2);
  }
  UnityEngine_GUILayout__Space(0x41000000,0);
  uVar2 = System_String__Concat(DAT_091f86b0,param_2,0);
  if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188c20);
  }
  uVar3 = EssentialSystemR1_OnlineTimeCheck__StepButtonStyle();
  lVar1 = DAT_091c01c8;
  lVar5 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar5 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar5 = *(long *)(lVar1 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  uVar4 = UnityEngine_GUILayout__Button(uVar2,uVar3,**(undefined8 **)(lVar1 + 0xb8),0);
  if ((uVar4 & 1) != 0) {
    EssentialSystemR1_OnlineTimeCheck__AdjustDraftTime(param_1,local_48);
  }
  UnityEngine_GUILayout__EndHorizontal(0);
  return;
}

