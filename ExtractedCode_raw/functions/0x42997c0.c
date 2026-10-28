// rea decompile_all
// name: CakeOrder.InGame.UICakeUseCurrencyButton$$SetData
// address: 0x42997c0
// body: available
// range: 0x42997c0-0x429994b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4299948 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UICakeUseCurrencyButton__SetData(long param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long *plVar9;
  long *plVar10;
  int local_24;
  
  local_24 = param_3;
  if ((DAT_095171eb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_091b4b50);
    DAT_095171eb = 1;
  }
  plVar9 = (long *)(param_1 + 0x38);
  *plVar9 = param_2;
  thunk_FUN_03f5d7b8(plVar9,param_2);
  if ((*plVar9 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    UnityEngine_UI_Image__set_sprite(*(long *)(param_1 + 0x28),*(undefined8 *)(*plVar9 + 0x38),0);
    plVar10 = *(long **)(param_1 + 0x30);
    uVar2 = System_Int32__ToString(&local_24,0);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x558))(plVar10,uVar2,*(undefined8 *)(*plVar10 + 0x560));
      uVar3 = FUN_05a8f088(DAT_091b4b50);
      if ((uVar3 & 1) == 0) {
        iVar1 = 0;
      }
      else {
        lVar4 = *(long *)(DAT_091b4b48 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        if ((*plVar9 == 0) || (**(long **)(lVar4 + 0xb8) == 0)) goto LAB_04299948;
        iVar1 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                          (**(long **)(lVar4 + 0xb8),*(undefined8 *)(*plVar9 + 0x18),0);
      }
      plVar9 = *(long **)(param_1 + 0x30);
      lVar4 = *(long *)(param_1 + 0x38);
      if (iVar1 < local_24) {
        if (lVar4 == 0) goto LAB_04299948;
        puVar5 = (undefined4 *)(lVar4 + 0x50);
        puVar6 = (undefined4 *)(lVar4 + 0x54);
        puVar7 = (undefined4 *)(lVar4 + 0x58);
        puVar8 = (undefined4 *)(lVar4 + 0x5c);
      }
      else {
        if (lVar4 == 0) goto LAB_04299948;
        puVar5 = (undefined4 *)(lVar4 + 0x40);
        puVar6 = (undefined4 *)(lVar4 + 0x44);
        puVar7 = (undefined4 *)(lVar4 + 0x48);
        puVar8 = (undefined4 *)(lVar4 + 0x4c);
      }
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x2a8))
                  (*puVar5,*puVar6,*puVar7,*puVar8,plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
        return;
      }
    }
  }
LAB_04299948:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

