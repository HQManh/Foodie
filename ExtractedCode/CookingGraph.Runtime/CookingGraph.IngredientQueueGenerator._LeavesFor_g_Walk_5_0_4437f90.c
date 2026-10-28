// rea decompile_all
// name: CookingGraph.IngredientQueueGenerator$$<LeavesFor>g__Walk|5_0
// address: 0x4437f90
// body: available
// range: 0x4437f90-0x443836b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4438364 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4438368 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_IngredientQueueGenerator__<LeavesFor>g__Walk_5_0
               (long param_1,int param_2,long *param_3,long *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  long local_48;
  
  if ((DAT_09517fce & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d068);
    FUN_03f5c2a4(&DAT_091a3dd0);
    FUN_03f5c2a4(&DAT_091a3dd8);
    FUN_03f5c2a4(&DAT_091a3de0);
    FUN_03f5c2a4(&DAT_091a8268);
    FUN_03f5c2a4(&DAT_091a8260);
    FUN_03f5c2a4(&DAT_09179e10);
    FUN_03f5c2a4(&DAT_0917a0a8);
    FUN_03f5c2a4(&DAT_091917c0);
    FUN_03f5c2a4(&DAT_091b3098);
    FUN_03f5c2a4(&DAT_091af2b8);
    FUN_03f5c2a4(&DAT_091af2a0);
    FUN_03f5c2a4(&DAT_0917c968);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517fce = 1;
  }
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Equality(param_1,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (param_3 != (long *)0x0) {
    lVar8 = *param_3;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_0917a0a8) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_0443810c;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917a0a8,4);
LAB_0443810c:
    uVar5 = (*(code *)*puVar6)(param_3,param_1,puVar6[1]);
    if ((uVar5 & 1) != 0) {
      return;
    }
    if (param_1 != 0) {
      if (*(char *)(param_1 + 0x40) == '\0') {
        if (*param_4 == 0) goto LAB_04438364;
        uVar5 = FUN_06fd9fbc(*param_4,param_1,&local_48,DAT_0919d068);
        if ((uVar5 & 1) != 0) {
          lVar8 = thunk_FUN_03f9944c(DAT_09179e10);
          FUN_053eb620(lVar8,param_3,DAT_091a8260);
          if ((lVar8 != 0) && (FUN_053ec72c(lVar8,param_1,DAT_091a8268), local_48 != 0)) {
            lVar11 = *(long *)(local_48 + 0x20);
            if (lVar11 == 0) {
              lVar11 = thunk_FUN_03f9944c(DAT_0917c968);
              FUN_057e0400(lVar11,DAT_091af2a0);
              if (lVar11 == 0) goto LAB_04438364;
            }
            FUN_057e185c(&local_60,lVar11,DAT_091af2b8);
            while( true ) {
              uVar5 = FUN_071bd28c(&local_60,DAT_091a3dd8);
              if ((uVar5 & 1) == 0) {
                FUN_071bd288(&local_60,DAT_091a3dd0);
                return;
              }
              if (local_50 == 0) {
                uVar12 = 0;
              }
              else {
                uVar12 = *(undefined8 *)(local_50 + 0x10);
              }
              if (local_48 == 0) break;
              uVar1 = *(undefined4 *)(local_48 + 0x28);
              if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              iVar4 = System_Math__Max(1,uVar1,0);
              CookingGraph_IngredientQueueGenerator__<LeavesFor>g__Walk_5_0
                        (uVar12,iVar4 * param_2,lVar8,param_4);
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_04438364;
        }
      }
      lVar11 = param_4[1];
      lVar8 = thunk_FUN_03f9944c(DAT_091917c0);
      System_Object___ctor(lVar8,0);
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x10) = param_1;
        thunk_FUN_03f5d7b8((long *)(lVar8 + 0x10),param_1);
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar4 = System_Math__Max(1,param_2,0);
        *(int *)(lVar8 + 0x18) = (int)param_4[2] * iVar4;
        lVar3 = DAT_091b3098;
        if (lVar11 != 0) {
          lVar9 = *(long *)(lVar11 + 0x10);
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar2 = *(uint *)(lVar11 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar2 + 1;
              plVar7 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
              *plVar7 = lVar8;
              thunk_FUN_03f5d7b8(plVar7,lVar8);
              return;
            }
            FUN_057e0c68(lVar11,lVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
LAB_04438364:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

