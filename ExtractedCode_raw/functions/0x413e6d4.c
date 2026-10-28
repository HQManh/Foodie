// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleKFC$$BuildRandomId
// address: 0x413e6d4
// body: available
// range: 0x413e6d4-0x413e8c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x413e8c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleKFC__BuildRandomId(long *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_38;
  
  if ((DAT_095163af & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ccc78);
    FUN_03f5c2a4(&DAT_091ccc80);
    FUN_03f5c2a4(&DAT_091ccc88);
    FUN_03f5c2a4(&DAT_091b2b40);
    FUN_03f5c2a4(&DAT_091b2b48);
    DAT_095163af = 1;
  }
  local_38 = 0;
  lVar6 = FUN_04b4db34(param_1,DAT_091ccc78);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) < 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = UnityEngine_Random__Range(0,*(int *)(lVar6 + 0x18),0);
      uVar4 = FUN_057997e4(lVar6,uVar4,DAT_091b2b48);
    }
    lVar6 = FUN_03f5c420(*(undefined8 *)
                          (*param_1 + (ulong)*(ushort *)(DAT_091ccc88 + 0x50) * 0x10 + 0x140));
    uVar7 = (**(code **)(lVar6 + 8))(param_1,1,&local_38,lVar6);
    if ((uVar7 & 1) == 0) {
      bVar1 = false;
    }
    else {
      iVar5 = UnityEngine_Random__Range(0,2,0);
      bVar1 = iVar5 == 1;
    }
    lVar6 = FUN_03f5c420(*(undefined8 *)
                          (*param_1 + (ulong)*(ushort *)(DAT_091ccc80 + 0x50) * 0x10 + 0x140));
    uVar7 = (**(code **)(lVar6 + 8))(param_1,0,&local_38,lVar6);
    bVar2 = false;
    if ((uVar7 & 1) != 0) {
      iVar5 = UnityEngine_Random__Range(0,2,0);
      bVar2 = iVar5 == 1;
    }
    lVar6 = FUN_03f5c420(*(undefined8 *)
                          (*param_1 + (ulong)*(ushort *)(DAT_091ccc80 + 0x50) * 0x10 + 0x140));
    uVar7 = (**(code **)(lVar6 + 8))(param_1,1,&local_38,lVar6);
    if ((uVar7 & 1) == 0) {
      bVar3 = false;
    }
    else {
      iVar5 = UnityEngine_Random__Range(0,2,0);
      bVar3 = iVar5 == 1;
    }
    AnhPD_FoodOrder_FlexibleKFC__BuildId(param_1[0xf],uVar4,bVar1,bVar2,bVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

