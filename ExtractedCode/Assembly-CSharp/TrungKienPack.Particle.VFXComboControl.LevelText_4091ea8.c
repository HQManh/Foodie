// rea decompile_all
// name: TrungKienPack.Particle.VFXComboControl$$LevelText
// address: 0x4091ea8
// body: available
// range: 0x4091ea8-0x4091fdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4091fbc to 0x42dbf68 CakeOrder.Localization.CakeLocalization$$Get (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4091fd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4091fd8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 TrungKienPack_Particle_VFXComboControl__LevelText(long param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_09515d19 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_0918ca30);
    FUN_03f5c2a4(&DAT_09211650);
    DAT_09515d19 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x18) <= param_2) {
LAB_04091fd8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar1 = *(long *)(lVar1 + (long)(int)param_2 * 8 + 0x20);
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x40);
      if (*(int *)(DAT_0918ca30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar1 = *(long *)(*(long *)(DAT_0918ca30 + 0xb8) + 8);
      if (lVar1 != 0) {
        if (*(int *)(lVar1 + 0x18) <= (int)param_2) {
          return uVar3;
        }
        if (*(int *)(DAT_0918ca30 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar1 = *(long *)(*(long *)(DAT_0918ca30 + 0xb8) + 8);
          if (lVar1 == 0) goto LAB_04091fd4;
        }
        if (param_2 < *(uint *)(lVar1 + 0x18)) {
          uVar2 = *(undefined8 *)(lVar1 + (long)(int)param_2 * 8 + 0x20);
          if (*(int *)(DAT_09182278 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = CakeOrder_Localization_CakeLocalization__Get(DAT_09211650,uVar2,uVar3,0);
          return uVar3;
        }
        goto LAB_04091fd8;
      }
    }
  }
LAB_04091fd4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

