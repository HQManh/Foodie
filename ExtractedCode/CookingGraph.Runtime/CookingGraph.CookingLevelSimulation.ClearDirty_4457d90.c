// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ClearDirty
// address: 0x4457d90
// body: available
// range: 0x4457d90-0x445816b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4458164 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4458168 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int CookingGraph_CookingLevelSimulation__ClearDirty(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09518024 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca3b8);
    FUN_03f5c2a4(&DAT_091cadc0);
    FUN_03f5c2a4(&DAT_091cb468);
    FUN_03f5c2a4(&DAT_09178768);
    FUN_03f5c2a4(&DAT_09178778);
    FUN_03f5c2a4(&DAT_091adcd8);
    FUN_03f5c2a4(&DAT_091add08);
    FUN_03f5c2a4(&DAT_091e7600);
    FUN_03f5c2a4(&DAT_091e7608);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_0920d868);
    DAT_09518024 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if ((*(long *)(param_1 + 0xe8) != 0) &&
     (lVar2 = FUN_05798d44(*(long *)(param_1 + 0xe8),DAT_091add08), lVar2 != 0)) {
    if ((int)*(ulong *)(lVar2 + 0x18) < 1) {
      iVar8 = 0;
    }
    else {
      iVar8 = 0;
      uVar12 = 0;
      uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar12) {
LAB_04458168:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar1 = *(undefined4 *)(lVar2 + uVar12 * 4 + 0x20);
        if ((-1 < param_2) && (param_2 <= iVar8)) {
          return iVar8;
        }
        CookingGraph_CookingLevelSimulation__GridAddress(&local_98,uVar1);
        uStack_78 = uStack_90;
        local_80 = local_98;
        local_70 = local_88;
        uStack_a8 = uStack_90;
        local_b0 = local_98;
        local_a0 = local_88;
        uVar4 = CookingGraph_CookingLevelSimulation__Outgoing(param_1,&local_b0);
        if ((uVar4 & 1) == 0) {
          if (*(long *)(param_1 + 0x178) == 0) goto LAB_04458164;
          uStack_c8 = uStack_78;
          local_d0 = local_80;
          local_c0 = local_70;
          uVar3 = CookingGraph_Execution_CookingExecution__UnitsAt
                            (*(long *)(param_1 + 0x178),&local_d0,0);
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
          }
          puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          lVar9 = puVar7[0x54];
          if (lVar9 == 0) {
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f298);
              puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            }
            uVar11 = *puVar7;
            lVar9 = thunk_FUN_03f9944c(DAT_09178768);
            FUN_053136a4(lVar9,uVar11,DAT_091e7600,0);
            lVar5 = *(long *)(DAT_0918f298 + 0xb8);
            *(long *)(lVar5 + 0x2a0) = lVar9;
            thunk_FUN_03f5d7b8(lVar5 + 0x2a0,lVar9);
          }
          uVar3 = FUN_04b0beec(uVar3,lVar9,DAT_091cb468);
          lVar9 = FUN_04b0451c(uVar3,DAT_091cadc0);
          if (lVar9 == 0) goto LAB_04458164;
          uVar4 = *(ulong *)(lVar9 + 0x18);
          if (uVar4 != 0) {
            if (0 < (int)uVar4) {
              uVar10 = 0;
              puVar7 = (undefined8 *)(lVar9 + 0x20);
              do {
                if ((uVar4 & 0xffffffff) <= uVar10) goto LAB_04458168;
                if (*(long *)(param_1 + 0x178) == 0) goto LAB_04458164;
                uStack_e8 = uStack_78;
                local_f0 = local_80;
                local_e0 = local_70;
                CookingGraph_Execution_CookingExecution__Consume
                          (*(long *)(param_1 + 0x178),&local_f0,*puVar7,0);
                uVar4 = (ulong)*(uint *)(lVar9 + 0x18);
                uVar10 = uVar10 + 1;
                puVar7 = puVar7 + 3;
              } while ((long)uVar10 < (long)(int)*(uint *)(lVar9 + 0x18));
            }
            uStack_108 = uStack_78;
            local_110 = local_80;
            local_100 = local_70;
            uVar4 = CookingGraph_CookingLevelSimulation__Incoming(param_1,&local_110);
            if ((uVar4 & 1) == 0) {
              if (*(long *)(param_1 + 0xe8) == 0) goto LAB_04458164;
              FUN_05798784(*(long *)(param_1 + 0xe8),uVar1,DAT_091adcd8);
            }
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = DAT_0920d868;
            puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            lVar5 = puVar7[0x55];
            if (lVar5 == 0) {
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              }
              uVar11 = *puVar7;
              lVar5 = thunk_FUN_03f9944c(DAT_09178778);
              FUN_05313f40(lVar5,uVar11,DAT_091e7608,0);
              lVar6 = *(long *)(DAT_0918f298 + 0xb8);
              *(long *)(lVar6 + 0x2a8) = lVar5;
              thunk_FUN_03f5d7b8(lVar6 + 0x2a8,lVar5);
            }
            iVar8 = iVar8 + 1;
            uVar11 = FUN_04af142c(lVar9,lVar5,DAT_091ca3b8);
            CookingGraph_CookingLevelSimulation__Emit(param_1,8,uVar1,uVar3,uVar11);
          }
        }
        uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((long)uVar12 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    return iVar8;
  }
LAB_04458164:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

