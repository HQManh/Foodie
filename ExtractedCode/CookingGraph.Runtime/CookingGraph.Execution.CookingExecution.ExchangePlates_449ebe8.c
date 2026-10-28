// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$ExchangePlates
// address: 0x449ebe8
// body: available
// range: 0x449ebe8-0x449f28b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x449f1f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449f1f4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449f23c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449f27c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449f288 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_Execution_CookingExecution__ExchangePlates
               (long param_1,undefined8 *param_2,long param_3,undefined8 *param_4,long param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_095181c6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_0917fd88);
    FUN_03f5c2a4(&DAT_0919c868);
    FUN_03f5c2a4(&DAT_091c9258);
    FUN_03f5c2a4(&DAT_091c9538);
    FUN_03f5c2a4(&DAT_091c9540);
    FUN_03f5c2a4(&DAT_09179320);
    FUN_03f5c2a4(&DAT_09178468);
    FUN_03f5c2a4(&DAT_09179330);
    FUN_03f5c2a4(&DAT_091e6c30);
    FUN_03f5c2a4(&DAT_091e6d50);
    FUN_03f5c2a4(&DAT_091e6d58);
    FUN_03f5c2a4(&DAT_0918ef78);
    FUN_03f5c2a4(&DAT_0918ef00);
    FUN_03f5c2a4(&DAT_0917fab8);
    FUN_03f5c2a4(&DAT_091bec18);
    DAT_095181c6 = 1;
  }
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
LAB_0449f1f0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uStack_c8 = param_2[1];
  local_d0 = *param_2;
  local_c0 = param_2[2];
  uVar2 = FUN_06e88030(*(long *)(param_1 + 0x18),&local_d0,&local_88,DAT_0919c868);
  if ((uVar2 & 1) == 0) {
LAB_0449f240:
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar5 = thunk_FUN_03f9944c();
    uVar13 = thunk_FUN_03fc39d4(&DAT_092123b8);
    System_ArgumentException___ctor(uVar5,uVar13,0);
LAB_0449f228:
    uVar13 = thunk_FUN_03fc39d4(&DAT_091c6480);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar13);
  }
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_0449f1f0;
  uStack_c8 = param_4[1];
  local_d0 = *param_4;
  local_c0 = param_4[2];
  uVar2 = FUN_06e88030(*(long *)(param_1 + 0x18),&local_d0,&local_90,DAT_0919c868);
  if ((uVar2 & 1) == 0) goto LAB_0449f240;
  if (((param_3 == 0) || (local_88 == 0)) || (*(long *)(local_88 + 0x10) == 0)) goto LAB_0449f1f0;
  if (*(int *)(param_3 + 0x18) != *(int *)(*(long *)(local_88 + 0x10) + 0x18)) goto LAB_0449f240;
  if (((param_5 == 0) || (local_90 == 0)) || (*(long *)(local_90 + 0x10) == 0)) goto LAB_0449f1f0;
  if (*(int *)(param_5 + 0x18) != *(int *)(*(long *)(local_90 + 0x10) + 0x18)) goto LAB_0449f240;
  lVar3 = FUN_03f5c394(DAT_0917fd88,2);
  if (lVar3 == 0) goto LAB_0449f1f0;
  if (*(int *)(lVar3 + 0x18) != 0) {
    uVar13 = param_2[1];
    uVar5 = *param_2;
    *(undefined8 *)(lVar3 + 0x30) = param_2[2];
    *(undefined8 *)(lVar3 + 0x28) = uVar13;
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    thunk_FUN_03f5d7b8(lVar3 + 0x28,0);
    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
      uVar13 = param_4[1];
      uVar5 = *param_4;
      *(undefined8 *)(lVar3 + 0x48) = param_4[2];
      *(undefined8 *)(lVar3 + 0x40) = uVar13;
      *(undefined8 *)(lVar3 + 0x38) = uVar5;
      thunk_FUN_03f5d7b8(lVar3 + 0x40,0);
      if (0 < *(int *)(lVar3 + 0x18)) {
        uVar2 = 0;
        puVar8 = (undefined8 *)(lVar3 + 0x20);
        do {
          lVar4 = thunk_FUN_03f9944c(DAT_0918ef78);
          System_Object___ctor(lVar4,0);
          if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_0449f1f4;
          if (lVar4 == 0) goto LAB_0449f1f0;
          uVar13 = puVar8[1];
          uVar5 = *puVar8;
          *(undefined8 *)(lVar4 + 0x20) = puVar8[2];
          *(undefined8 *)(lVar4 + 0x18) = uVar13;
          *(undefined8 *)(lVar4 + 0x10) = uVar5;
          thunk_FUN_03f5d7b8(lVar4 + 0x18,0);
          uVar13 = *(undefined8 *)(param_1 + 0x38);
          uVar5 = thunk_FUN_03f9944c(DAT_09179320);
          FUN_05322d94(uVar5,lVar4,DAT_091e6d50,0);
          uVar6 = FUN_04ab6f28(uVar13,uVar5,DAT_091c9538);
          if ((uVar6 & 1) != 0) {
LAB_0449f1f8:
            thunk_FUN_03fc39d4(&DAT_091870e0);
            uVar5 = thunk_FUN_03f9944c();
            uVar13 = thunk_FUN_03fc39d4(&DAT_091fb008);
            System_InvalidOperationException___ctor(uVar5,uVar13,0);
            goto LAB_0449f228;
          }
          uVar13 = *(undefined8 *)(param_1 + 0x48);
          uVar5 = thunk_FUN_03f9944c(DAT_09179330);
          FUN_05322d94(uVar5,lVar4,DAT_091e6d58,0);
          uVar6 = FUN_04ab6f28(uVar13,uVar5,DAT_091c9540);
          if ((uVar6 & 1) != 0) goto LAB_0449f1f8;
          uVar2 = uVar2 + 1;
          puVar8 = puVar8 + 3;
        } while ((long)uVar2 < (long)*(int *)(lVar3 + 0x18));
      }
      lVar3 = local_88;
      lVar4 = System_Array__Clone(param_3,0);
      uVar5 = DAT_0917fc40;
      if (lVar3 == 0) goto LAB_0449f1f0;
      if (lVar4 == 0) {
        lVar7 = 0;
        *(undefined8 *)(lVar3 + 0x18) = 0;
      }
      else {
        lVar7 = thunk_FUN_03f99350(lVar4,DAT_0917fc40);
        uVar13 = DAT_0917fc40;
        if (lVar7 == 0) {
LAB_0449f274:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar4,uVar5);
        }
        *(long *)(lVar3 + 0x18) = lVar7;
        lVar7 = thunk_FUN_03f99350(lVar4,uVar13);
        uVar5 = uVar13;
        if (lVar7 == 0) goto LAB_0449f274;
      }
      thunk_FUN_03f5d7b8(lVar3 + 0x18,lVar7);
      lVar3 = local_90;
      lVar4 = System_Array__Clone(param_5,0);
      uVar5 = DAT_0917fc40;
      if (lVar3 == 0) goto LAB_0449f1f0;
      if (lVar4 == 0) {
        lVar7 = 0;
        *(undefined8 *)(lVar3 + 0x18) = 0;
      }
      else {
        lVar7 = thunk_FUN_03f99350(lVar4,DAT_0917fc40);
        uVar13 = DAT_0917fc40;
        if (lVar7 == 0) {
LAB_0449f280:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar4,uVar5);
        }
        *(long *)(lVar3 + 0x18) = lVar7;
        lVar7 = thunk_FUN_03f99350(lVar4,uVar13);
        uVar5 = uVar13;
        if (lVar7 == 0) goto LAB_0449f280;
      }
      thunk_FUN_03f5d7b8(lVar3 + 0x18,lVar7);
      puVar8 = (undefined8 *)FUN_03f5c394(DAT_0917fab8,2);
      uStack_e8 = param_2[1];
      local_f0 = *param_2;
      local_e0 = param_2[2];
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      FUN_066bc284(&local_d0,&local_f0,local_88,DAT_091bec18);
      if (puVar8 == (undefined8 *)0x0) goto LAB_0449f1f0;
      if (*(int *)(puVar8 + 3) != 0) {
        puVar8[5] = uStack_c8;
        puVar8[4] = local_d0;
        puVar8[7] = uStack_b8;
        puVar8[6] = local_c0;
        thunk_FUN_03f5d7b8(puVar8 + 5,0);
        uStack_78 = param_4[1];
        local_80 = *param_4;
        local_70 = param_4[2];
        uStack_e8 = 0;
        local_f0 = 0;
        uStack_d8 = 0;
        local_e0 = 0;
        FUN_066bc284(&local_f0,&local_80,local_90,DAT_091bec18);
        if ((*(uint *)(puVar8 + 3) & 0xfffffffe) != 0) {
          puVar8[9] = uStack_e8;
          puVar8[8] = local_f0;
          puVar8[0xb] = uStack_d8;
          puVar8[10] = local_e0;
          thunk_FUN_03f5d7b8(puVar8 + 9,0);
          uVar10 = *(uint *)(puVar8 + 3);
          if (0 < (int)uVar10) {
            uVar12 = 0;
            puVar1 = puVar8;
            do {
              if (uVar10 <= uVar12) goto LAB_0449f1f4;
              local_100 = puVar1[6];
              lVar3 = puVar1[7];
              uStack_108 = puVar1[5];
              local_110 = puVar1[4];
              local_b0 = local_110;
              uStack_a8 = uStack_108;
              local_a0 = local_100;
              CookingGraph_Execution_CookingExecution__Emit(param_1,7,&local_110,0);
              if (lVar3 == 0) goto LAB_0449f1f0;
              uVar5 = *(undefined8 *)(lVar3 + 0x18);
              if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar11 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
              lVar3 = puVar11[0xb];
              if (lVar3 == 0) {
                if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
                  FUN_03f5c424();
                  puVar11 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
                }
                uVar13 = *puVar11;
                lVar3 = thunk_FUN_03f9944c(DAT_09178468);
                FUN_05311eac(lVar3,uVar13,DAT_091e6c30,0);
                plVar9 = (long *)(*(long *)(DAT_0918ef00 + 0xb8) + 0x58);
                *plVar9 = lVar3;
                thunk_FUN_03f5d7b8(plVar9,lVar3);
              }
              uVar2 = FUN_04ab20f8(uVar5,lVar3,DAT_091c9258);
              if ((uVar2 & 1) != 0) {
                uStack_128 = uStack_a8;
                local_130 = local_b0;
                local_120 = local_a0;
                CookingGraph_Execution_CookingExecution__Emit(param_1,5,&local_130,0);
              }
              uVar10 = *(uint *)(puVar8 + 3);
              uVar12 = uVar12 + 1;
              puVar1 = puVar1 + 4;
            } while ((int)uVar12 < (int)uVar10);
          }
          CookingGraph_Execution_CookingExecution__AdvanceDepartures(param_1);
          return;
        }
      }
    }
  }
LAB_0449f1f4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

