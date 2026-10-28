// rea decompile_all
// name: Datpt.Cook_Order.ItemMovingBase$$OnShake
// address: 0x41aec18
// body: available
// range: 0x41aec18-0x41aecf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41aece0 to 0x4d9656c FUN_04d9656c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41aecf4 to 0x4549e50 DG.Tweening.ShortcutExtensions$$DOKill (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_ItemMovingBase__OnShake(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if ((DAT_095168d6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091dbe60);
    FUN_03f5c2a4(&DAT_091dbee0);
    FUN_03f5c2a4(&DAT_091dc048);
    DAT_095168d6 = 1;
  }
  uVar1 = UnityEngine_Component__get_transform(param_1,0);
  if ((param_2 & 1) != 0) {
    uVar1 = DG_Tweening_ShortcutExtensions__DOShakePosition
                      (0x42c80000,0x3ca3d70a,0x42b40000,uVar1,0xf,0,1,0,0);
    uVar1 = FUN_04d95e8c(uVar1,1,DAT_091dbee0);
    uVar1 = FUN_04d95c7c(0x3f000000,uVar1,DAT_091dbe60);
    FUN_04d9656c(uVar1,0,DAT_091dc048);
    return;
  }
  DG_Tweening_ShortcutExtensions__DOKill(uVar1,0,0);
  return;
}

