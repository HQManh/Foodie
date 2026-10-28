// rea decompile_all
// name: CakeOrder.Shop.InAppShopDataAccess$$GetRewardIcon
// address: 0x436ff28
// body: available
// range: 0x436ff28-0x43700cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43700cc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_Shop_InAppShopDataAccess__GetRewardIcon
          (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int local_68;
  int local_64;
  
  if ((DAT_095178d0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095178d0 = 1;
  }
  lVar5 = *(long *)(param_1 + 0xa0);
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    if ((int)*(ulong *)(lVar5 + 0x18) < 1) {
      uVar4 = 0;
      uVar2 = 0;
    }
    else {
      uVar6 = 0;
      uVar2 = 0;
      uVar4 = 0;
      uVar1 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      local_68 = -0x80000000;
      local_64 = -0x80000000;
      do {
        if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar7 = *(long *)(lVar5 + 0x20 + uVar6 * 8);
        if (lVar7 != 0) {
          uVar3 = *(undefined8 *)(lVar7 + 0x28);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
          if ((((uVar1 & 1) == 0) &&
              (uVar1 = System_String__op_Inequality(*(undefined8 *)(lVar7 + 0x18),param_3,0),
              (uVar1 & 1) == 0)) && (*(int *)(lVar7 + 0x20) <= param_4)) {
            uVar1 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar7 + 0x10),0);
            if ((uVar1 & 1) == 0) {
              uVar1 = System_String__op_Equality(*(undefined8 *)(lVar7 + 0x10),param_2,0);
              if (((uVar1 & 1) != 0) && (local_68 < *(int *)(lVar7 + 0x20))) {
                uVar2 = *(undefined8 *)(lVar7 + 0x28);
                local_68 = *(int *)(lVar7 + 0x20);
              }
            }
            else if (local_64 < *(int *)(lVar7 + 0x20)) {
              uVar4 = *(undefined8 *)(lVar7 + 0x28);
              local_64 = *(int *)(lVar7 + 0x20);
            }
          }
        }
        uVar1 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    if ((uVar6 & 1) == 0) {
      uVar2 = uVar4;
    }
  }
  return uVar2;
}

