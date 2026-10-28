// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamDecorLayout$$Search
// address: 0x414ca74
// body: available
// range: 0x414ca74-0x414cc63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x414cc58 to 0x75db010 System.Array$$Copy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x414cc5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414cc60 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IceCreamDecorLayout__Search(long param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int local_64;
  
  local_64 = param_4;
  do {
    if ((DAT_09516453 & 1) == 0) {
      FUN_03f5c2a4(&DAT_091b2fc0);
      FUN_03f5c2a4(&DAT_091b2fc8);
      FUN_03f5c2a4(&DAT_09188ad0);
      DAT_09516453 = 1;
    }
    if (*(int *)(param_1 + 0x4c) <= local_64) {
      return;
    }
    if (*(uint *)(param_1 + 0x48) == param_2) {
      *(int *)(param_1 + 0x4c) = local_64;
      System_Array__Copy(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),param_2,0);
      return;
    }
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 == 0) {
LAB_0414cc5c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(uint *)(lVar4 + 0x18) <= param_2) {
LAB_0414cc60:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar5 = (long)(int)param_2;
    lVar4 = *(long *)(lVar4 + lVar5 * 8 + 0x20);
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x18), lVar4 == 0)) goto LAB_0414cc5c;
    if (0 < *(int *)(lVar4 + 0x18)) {
      iVar7 = 0;
      do {
        lVar2 = FUN_057e0998(lVar4,iVar7,DAT_091b2fc8);
        if (lVar2 != 0) {
          uVar6 = *(undefined8 *)(lVar2 + 0x10);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
          if ((uVar3 & 1) != 0) {
            uVar1 = 1 << (ulong)(*(uint *)(lVar2 + 0x18) & 0x1f);
            if ((uVar1 & param_3) == 0) {
              lVar2 = *(long *)(param_1 + 0x38);
              if (lVar2 == 0) goto LAB_0414cc5c;
              if (*(uint *)(lVar2 + 0x18) <= param_2) goto LAB_0414cc60;
              *(int *)(lVar2 + lVar5 * 4 + 0x20) = iVar7;
              AnhPD_FoodOrder_IceCreamDecorLayout__Search
                        (param_1,param_2 + 1,uVar1 | param_3,local_64 + iVar7);
            }
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(lVar4 + 0x18));
    }
    lVar4 = *(long *)(param_1 + 0x38);
    if (lVar4 == 0) goto LAB_0414cc5c;
    if (*(uint *)(lVar4 + 0x18) <= param_2) goto LAB_0414cc60;
    *(undefined4 *)(lVar4 + lVar5 * 4 + 0x20) = 0xffffffff;
    local_64 = local_64 + 1000;
    param_2 = param_2 + 1;
  } while( true );
}

