// rea decompile_all
// name: DG.Tweening.Sequence$$.ctor
// address: 0x453e9f0
// body: available
// range: 0x453e9f0-0x453eafb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Sequence___ctor(long *param_1)

{
  long lVar1;
  
  if ((DAT_095186fb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aae28);
    FUN_03f5c2a4(&DAT_091b1118);
    FUN_03f5c2a4(&DAT_0917bbf8);
    FUN_03f5c2a4(&DAT_0917cec8);
    DAT_095186fb = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0917cec8);
  FUN_057e0400(lVar1,DAT_091b1118);
  param_1[0x24] = lVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x24,lVar1);
  lVar1 = thunk_FUN_03f9944c(DAT_0917bbf8);
  FUN_057e0400(lVar1,DAT_091aae28);
  param_1[0x25] = lVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x25,lVar1);
  *(undefined4 *)(param_1 + 8) = 0xfffffc19;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x23) = 1;
  *(undefined4 *)((long)param_1 + 0x11c) = 0xffffffff;
  DG_Tweening_Core_ABSSequentiable___ctor(param_1,0);
  *(undefined4 *)(param_1 + 2) = 1;
                    /* WARNING: Could not recover jumptable at 0x0453eaf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  return;
}

