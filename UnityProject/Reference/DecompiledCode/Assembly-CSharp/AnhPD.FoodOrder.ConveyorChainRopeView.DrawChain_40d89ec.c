// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorChainRopeView$$DrawChain
// address: 0x40d89ec
// body: available
// range: 0x40d89ec-0x40d8d07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d8d04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorChainRopeView__DrawChain
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,long param_7,uint param_8,int param_9)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  
  if ((DAT_09516025 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091abe98);
    FUN_03f5c2a4(&DAT_091abea0);
    DAT_09516025 = 1;
  }
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  if ((param_7 != 0) && (lVar12 = *(long *)(param_7 + 0x18), lVar12 != 0)) {
    iVar7 = *(int *)(lVar12 + 0x18);
    if (0 < iVar7) {
      iVar13 = 0;
      do {
        iVar1 = iVar13 + 1;
        iVar14 = iVar1;
        if (iVar1 < iVar7) {
          do {
            lVar3 = FUN_057e0998(lVar12,iVar13,DAT_091abea0);
            if (lVar3 == 0) goto LAB_040d8d04;
            iVar7 = *(int *)(lVar3 + 0x20);
            lVar3 = FUN_057e0998(lVar12,iVar14,DAT_091abea0);
            if (lVar3 == 0) goto LAB_040d8d04;
            iVar2 = *(int *)(lVar3 + 0x20);
            if (DAT_09516086 == '\0') {
              FUN_03f5c2a4(&DAT_09187e80);
              DAT_09516086 = '\x01';
            }
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar7 = iVar7 - iVar2;
            iVar2 = -iVar7;
            if (-1 < iVar7) {
              iVar2 = iVar7;
            }
            if (iVar2 == 1) {
              FUN_057e0998(lVar12,iVar13,DAT_091abea0);
              uVar4 = AnhPD_FoodOrder_ConveyorChainRopeView__IsBright();
              if ((uVar4 & 1) == 0) {
                FUN_057e0998(lVar12,iVar14,DAT_091abea0);
                uVar4 = AnhPD_FoodOrder_ConveyorChainRopeView__IsBright();
                if (param_5 == 0) goto LAB_040d8d04;
                fVar15 = *(float *)(param_5 + 0x4c);
                fVar16 = *(float *)(param_5 + 0x50);
                fVar17 = *(float *)(param_5 + 0x54);
                fVar18 = *(float *)(param_5 + 0x58);
                pfVar8 = (float *)(param_5 + 0x74);
                pfVar9 = (float *)(param_5 + 0x78);
                pfVar10 = (float *)(param_5 + 0x7c);
                pfVar11 = (float *)(param_5 + 0x70);
                if ((uVar4 & 1) != 0) goto LAB_040d8bac;
              }
              else {
                if (param_5 == 0) goto LAB_040d8d04;
                fVar15 = *(float *)(param_5 + 0x4c);
                fVar16 = *(float *)(param_5 + 0x50);
                fVar17 = *(float *)(param_5 + 0x54);
                fVar18 = *(float *)(param_5 + 0x58);
LAB_040d8bac:
                pfVar8 = (float *)(param_5 + 100);
                pfVar9 = (float *)(param_5 + 0x68);
                pfVar10 = (float *)(param_5 + 0x6c);
                pfVar11 = (float *)(param_5 + 0x60);
              }
              fVar19 = *pfVar11;
              fVar20 = *pfVar8;
              fVar21 = *pfVar10;
              fVar22 = *pfVar9;
              uVar5 = FUN_057e0998(lVar12,iVar13,DAT_091abea0);
              uVar6 = FUN_057e0998(lVar12,iVar14,DAT_091abea0);
              AnhPD_FoodOrder_ConveyorChainRopeView__Endpoints
                        (fVar15 * fVar19,fVar16 * fVar20,fVar17 * fVar22,fVar18 * fVar21,param_5,
                         param_6,uVar5,uVar6,&local_b0,&local_c0);
              if (((param_8 & 1) == 0) ||
                 (uVar4 = AnhPD_FoodOrder_ConveyorChainRopeView__ClipToWindow
                                    (param_1,param_2,param_3,param_4,param_5,&local_b0,&local_c0),
                 (uVar4 & 1) != 0)) {
                uVar5 = AnhPD_FoodOrder_ConveyorChainRopeView__GetLine(param_5,param_9);
                AnhPD_FoodOrder_ConveyorChainRopeView__Apply
                          ((undefined4)local_b0,local_b0._4_4_,local_a8,(undefined4)local_c0,
                           local_c0._4_4_,local_b8,uVar5,uVar5);
                param_9 = param_9 + 1;
              }
            }
            iVar7 = *(int *)(lVar12 + 0x18);
            iVar14 = iVar14 + 1;
          } while (iVar14 < iVar7);
        }
        iVar13 = iVar1;
      } while (iVar1 < iVar7);
    }
    AnhPD_FoodOrder_ConveyorChainRopeView__DrawPendingLinks
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8 & 1,param_9);
    return;
  }
LAB_040d8d04:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

