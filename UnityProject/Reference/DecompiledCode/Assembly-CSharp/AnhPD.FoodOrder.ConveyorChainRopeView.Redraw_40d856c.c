// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorChainRopeView$$Redraw
// address: 0x40d856c
// body: available
// range: 0x40d856c-0x40d894b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d8908 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d893c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d8940 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d8948 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040d8944) */

void AnhPD_FoodOrder_ConveyorChainRopeView__Redraw
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,long param_6,uint param_7)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  
  if ((DAT_0951601f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3e0);
    FUN_03f5c2a4(&DAT_0917aa88);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b1a50);
    FUN_03f5c2a4(&DAT_091aba88);
    FUN_03f5c2a4(&DAT_091ae338);
    FUN_03f5c2a4(&DAT_091ae340);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951601f = 1;
  }
  lVar5 = *(long *)(param_5 + 0x20);
  if (lVar5 == 0) goto LAB_040d8908;
  lVar6 = *(long *)(param_5 + 0x28);
  *(undefined4 *)(lVar5 + 0x18) = 0;
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  if (lVar6 == 0) goto LAB_040d8908;
  *(undefined4 *)(lVar6 + 0x18) = 0;
  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
  if (param_6 != 0) {
    uVar8 = *(undefined8 *)(param_5 + 0x30);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar8,0);
    if ((uVar2 & 1) != 0) {
      plVar3 = (long *)AnhPD_FoodOrder_ConveyorGrid__get_Chains(param_6);
      if (plVar3 != (long *)0x0) {
        lVar5 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_0917a3e0) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_040d86f0;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a3e0,0);
LAB_040d86f0:
        plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        iVar1 = 0;
        do {
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_09185b10) {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_040d8778;
              }
              uVar2 = uVar2 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_040d8778:
          uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if ((uVar2 & 1) == 0) {
            if (plVar3 == (long *)0x0) goto LAB_040d8888;
            lVar5 = *plVar3;
            uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar2 == 0) goto LAB_040d885c;
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            goto LAB_040d8844;
          }
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917aa88) {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_040d87dc;
              }
              uVar2 = uVar2 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917aa88,0);
LAB_040d87dc:
          uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          iVar1 = AnhPD_FoodOrder_ConveyorChainRopeView__DrawChain
                            (param_1,param_2,param_3,param_4,param_5,param_6,uVar8,param_7 & 1,iVar1
                            );
        } while( true );
      }
      goto LAB_040d8908;
    }
  }
  iVar1 = 0;
  goto LAB_040d8888;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
LAB_040d8844:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_040d8878;
    }
  }
LAB_040d885c:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_040d8878:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_040d8888:
  lVar5 = *(long *)(param_5 + 0x10);
  while (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) <= iVar1) {
      AnhPD_FoodOrder_ConveyorChainRopeView__DrawAnchors(param_5,param_7 & 1);
      return;
    }
    uVar8 = FUN_057e0998(lVar5,iVar1,DAT_091ae340);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar8,0);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(param_5 + 0x10) == 0) ||
         (lVar5 = FUN_057e0998(*(long *)(param_5 + 0x10),iVar1,DAT_091ae340), lVar5 == 0)) break;
      UnityEngine_Renderer__set_enabled(lVar5,0,0);
    }
    iVar1 = iVar1 + 1;
    lVar5 = *(long *)(param_5 + 0x10);
  }
LAB_040d8908:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

