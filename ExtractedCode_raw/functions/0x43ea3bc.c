// rea decompile_all
// name: Coffee.UIEffects.UIEffect$$set_dstBlendMode
// address: 0x43ea3bc
// body: available
// range: 0x43ea3bc-0x43ea483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43ea480 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIEffect__set_dstBlendMode(long *param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 local_28;
  
  if ((DAT_09517dbc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bebe0);
    DAT_09517dbc = 1;
  }
  if (*(int *)((long)param_1 + 0x164) != param_2) {
    lVar3 = (**(code **)(*param_1 + 0x2e8))(param_1,*(undefined8 *)(*param_1 + 0x2f0));
    *(int *)((long)param_1 + 0x164) = param_2;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar1 = param_1[0x2c];
    *(int *)(lVar3 + 0xd0) = param_2;
    local_28 = 0;
    FUN_066c7860(&local_28,(int)lVar1,param_2,DAT_091bebe0);
    uVar2 = Coffee_UIEffects_BlendTypeConverter__Convert(local_28);
    *(undefined4 *)((long)param_1 + 0x15c) = uVar2;
    (**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
    (**(code **)(*param_1 + 0x338))(param_1,*(undefined8 *)(*param_1 + 0x340));
  }
  return;
}

