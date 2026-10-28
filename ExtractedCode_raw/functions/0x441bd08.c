// rea decompile_all
// name: CookingGraph.EstimatorBotScorer$$QueueSupply
// address: 0x441bd08
// body: available
// range: 0x441bd08-0x441c077 inclusive
// range: 0x441c0b0-0x441c107 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x441c0f4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441c0f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441c0fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441c104 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0441c070) */
/* WARNING: Removing unreachable block (ram,0x0441c074) */
/* WARNING: Removing unreachable block (ram,0x0441c0f0) */
/* WARNING: Removing unreachable block (ram,0x0441c100) */

undefined8
CookingGraph_EstimatorBotScorer__QueueSupply(undefined8 param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09517f11 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d078);
    FUN_03f5c2a4(&DAT_091762d0);
    FUN_03f5c2a4(&DAT_091a23b0);
    FUN_03f5c2a4(&DAT_091a2398);
    FUN_03f5c2a4(&DAT_091a23b8);
    FUN_03f5c2a4(&DAT_091a23a0);
    FUN_03f5c2a4(&DAT_091a23a8);
    FUN_03f5c2a4(&DAT_091a23c0);
    FUN_03f5c2a4(&DAT_0917a148);
    FUN_03f5c2a4(&DAT_091ab560);
    FUN_03f5c2a4(&DAT_091ab538);
    FUN_03f5c2a4(&DAT_091ab550);
    FUN_03f5c2a4(&DAT_091ab528);
    FUN_03f5c2a4(&DAT_0917bd50);
    FUN_03f5c2a4(&DAT_0917bd58);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517f11 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  uVar3 = thunk_FUN_03f9944c(DAT_091762d0);
  FUN_06fe1d68(uVar3,DAT_0919d078);
  if (param_2 != 0) {
    lVar8 = *(long *)(param_2 + 0x28);
    if (lVar8 == 0) {
      lVar8 = thunk_FUN_03f9944c(DAT_0917bd58);
      FUN_057e0400(lVar8,DAT_091ab550);
      if (lVar8 == 0) goto LAB_0441c0fc;
    }
    FUN_057e185c(&local_b8,lVar8,DAT_091ab560);
    local_70 = local_a8;
    puStack_78 = puStack_b0;
    local_80 = local_b8;
    do {
      do {
        uVar4 = FUN_071bd28c(&local_80,DAT_091a23b8);
        if ((uVar4 & 1) == 0) {
          FUN_071bd288(&local_80,DAT_091a23b0);
          return uVar3;
        }
      } while (local_70 == 0);
      lVar8 = *(long *)(local_70 + 0x10);
      if (lVar8 == 0) {
        lVar8 = thunk_FUN_03f9944c(DAT_0917bd50);
        FUN_057e0400(lVar8,DAT_091ab528);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      FUN_057e185c(&local_b8,lVar8,DAT_091ab538);
      local_a0 = local_b8;
      local_b8 = 0;
      puStack_98 = puStack_b0;
      local_90 = local_a8;
      puStack_b0 = &local_a0;
LAB_0441bf48:
      uVar4 = FUN_071bd28c(&local_a0,DAT_091a23a0);
      lVar8 = local_90;
      if ((uVar4 & 1) != 0) {
        if ((local_90 != 0) && (*(int *)(local_90 + 0x18) == 0)) {
          uVar9 = *(undefined8 *)(local_90 + 0x20);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Equality(uVar9,0,0);
          if (((uVar4 & 1) == 0) && (*(int *)(lVar8 + 0x28) != 4)) {
            if (param_3 != (long *)0x0) {
              lVar6 = *param_3;
              uVar9 = *(undefined8 *)(lVar8 + 0x10);
              uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar4 != 0) {
                piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == DAT_0917a148) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 4) * 0x10 + 0x138);
                    goto LAB_0441bff4;
                  }
                  uVar4 = uVar4 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar4 != 0);
              }
              puVar5 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917a148,4);
LAB_0441bff4:
              uVar4 = (*(code *)*puVar5)(param_3,uVar9,puVar5[1]);
              if ((uVar4 & 1) != 0) goto LAB_0441bf48;
            }
            uVar9 = *(undefined8 *)(lVar8 + 0x20);
            uVar1 = *(undefined4 *)(lVar8 + 0x2c);
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar2 = System_Math__Max(1,uVar1,0);
            CookingGraph_EstimatorBotScorer__AddRequirements((float)iVar2,param_1,uVar3,uVar9);
          }
        }
        goto LAB_0441bf48;
      }
      FUN_071bd288(&local_a0,DAT_091a2398);
    } while( true );
  }
LAB_0441c0fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

