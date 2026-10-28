// rea decompile_all
// name: AnhPD.FoodOrder.SpawnService$$SpawnSingle
// address: 0x41fdb44
// body: available
// range: 0x41fdb44-0x41fdcdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41fdcdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * AnhPD_FoodOrder_SpawnService__SpawnSingle
                 (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6,uint param_7,ulong param_8,undefined4 param_9)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_58;
  
  uVar6 = param_2;
  uVar7 = param_3;
  if ((DAT_09516bd2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4c88);
    FUN_03f5c2a4(&DAT_091d4fa8);
    DAT_09516bd2 = 1;
  }
  local_58 = 0;
  lVar1 = *(long *)(DAT_091b4c88 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  if (param_6 != 0) {
    lVar4 = **(long **)(lVar1 + 0xb8);
    lVar1 = UnityEngine_Component__get_transform(param_6,0);
    if ((((lVar1 != 0) && (uVar5 = UnityEngine_Transform__get_rotation(lVar1,0), lVar4 != 0)) &&
        (plVar2 = (long *)FUN_04c37c04(param_1,param_2,param_3,uVar5,uVar6,uVar7,param_4,lVar4,
                                       param_6,0,DAT_091d4fa8), plVar2 != (long *)0x0)) &&
       (lVar1 = UnityEngine_Component__get_gameObject(plVar2,0), lVar1 != 0)) {
      UnityEngine_GameObject__SetActive(lVar1,1,0);
      (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
      *(undefined4 *)((long)plVar2 + 0xec) = param_9;
      if ((param_8 & 1) != 0) {
        if (*(long *)(param_5 + 0x20) == 0) goto LAB_041fdcdc;
        uVar3 = AnhPD_FoodOrder_AreaService__TryGetCell
                          (*(long *)(param_5 + 0x20),plVar2,&local_58,0);
        if ((uVar3 & 1) != 0) {
          AnhPD_FoodOrder_DragItem__RegisterCell(plVar2,local_58,param_7 & 1,0);
        }
      }
      return plVar2;
    }
  }
LAB_041fdcdc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

