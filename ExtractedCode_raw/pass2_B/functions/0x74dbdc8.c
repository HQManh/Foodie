// rea decompile_all
// name: System.Resources.ResourceReader$$_LoadObjectV1
// address: 0x74dbdc8
// body: available
// range: 0x74dbdc8-0x74dc50b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74dc4cc to 0x74dc50c System.Resources.ResourceReader$$DeserializeObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74dc4e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dc504 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dc508 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Resources_ResourceReader___LoadObjectV1(long param_1,ulong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar13 = tpidr_el0;
  iVar6 = (int)param_2;
  local_48 = *(long *)(lVar13 + 0x28);
  if ((DAT_0952157c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171448);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09171520);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09173188);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_0952157c = 1;
    param_2 = extraout_x1;
  }
  plVar8 = *(long **)(param_1 + 0x10);
  if (plVar8 == (long *)0x0) {
LAB_074dc4d0:
    lVar13 = *(long *)(lVar13 + 0x28);
  }
  else {
    auVar15 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
    param_2 = auVar15._8_8_;
    plVar8 = auVar15._0_8_;
    if (plVar8 == (long *)0x0) goto LAB_074dc4d0;
    (**(code **)(*plVar8 + 0x348))
              (plVar8,*(long *)(param_1 + 0x28) + (long)iVar6,0,*(undefined8 *)(*plVar8 + 0x350));
    param_2 = extraout_x1_00;
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_074dc4d0;
    iVar6 = System_IO_BinaryReader__Read7BitEncodedInt(*(long *)(param_1 + 0x10),0);
    if (iVar6 == -1) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = extraout_x1_01;
      auVar15 = auVar2 << 0x40;
LAB_074dc040:
      if (*(long *)(lVar13 + 0x28) == local_48) {
        return;
      }
      goto LAB_074dc508;
    }
    uVar9 = System_Resources_ResourceReader__FindType(param_1,iVar6);
    lVar11 = DAT_09535468;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar10 = System_Type__GetTypeFromHandle(lVar11 + 0x20,0);
    auVar15 = System_Type__op_Equality(uVar9,uVar10,0);
    lVar11 = DAT_09535420;
    param_2 = auVar15._8_8_;
    if ((auVar15._0_8_ & 1) != 0) {
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 != (long *)0x0) {
        auVar15._8_8_ = *(undefined8 *)(*plVar8 + 0x2a0);
        auVar15._0_8_ = plVar8;
        if (*(long *)(lVar13 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x074dbf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar8 + 0x298))();
          return;
        }
        goto LAB_074dc508;
      }
      goto LAB_074dc4d0;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = System_Type__GetTypeFromHandle(lVar11 + 0x20,0);
    auVar15 = System_Type__op_Equality(uVar9,uVar10,0);
    lVar11 = DAT_095353f0;
    param_2 = auVar15._8_8_;
    if ((auVar15._0_8_ & 1) != 0) {
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 != (long *)0x0) {
        uVar7 = (**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230));
        lVar11 = DAT_09535420;
LAB_074dbf8c:
        local_58 = CONCAT44(local_58._4_4_,uVar7);
        goto LAB_074dc034;
      }
      goto LAB_074dc4d0;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = System_Type__GetTypeFromHandle(lVar11 + 0x20,0);
    auVar15 = System_Type__op_Equality(uVar9,uVar10,0);
    lVar11 = DAT_09535408;
    param_2 = auVar15._8_8_;
    if ((auVar15._0_8_ & 1) != 0) {
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
        lVar11 = DAT_095353f0;
LAB_074dc030:
        local_58 = CONCAT71(local_58._1_7_,uVar4);
LAB_074dc034:
        puVar12 = &local_58;
LAB_074dc03c:
        auVar15 = FUN_03f5c42c(lVar11,puVar12);
        goto LAB_074dc040;
      }
      goto LAB_074dc4d0;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = System_Type__GetTypeFromHandle(lVar11 + 0x20,0);
    auVar15 = System_Type__op_Equality(uVar9,uVar10,0);
    lVar11 = DAT_09535410;
    param_2 = auVar15._8_8_;
    if ((auVar15._0_8_ & 1) != 0) {
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
        lVar11 = DAT_09535408;
        goto LAB_074dc030;
      }
      goto LAB_074dc4d0;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = System_Type__GetTypeFromHandle(lVar11 + 0x20,0);
    auVar15 = System_Type__op_Equality(uVar9,uVar10,0);
    lVar11 = DAT_09535440;
    param_2 = auVar15._8_8_;
    if ((auVar15._0_8_ & 1) != 0) {
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210));
        lVar11 = DAT_09535410;
LAB_074dc0b8:
        local_58 = CONCAT62(local_58._2_6_,uVar5);
        goto LAB_074dc034;
      }
      goto LAB_074dc4d0;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = System_Type__GetTypeFromHandle(lVar11 + 0x20,0);
    auVar15 = System_Type__op_Equality(uVar9,uVar10,0);
    lVar11 = DAT_09535418;
    param_2 = auVar15._8_8_;
    if ((auVar15._0_8_ & 1) != 0) {
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 != (long *)0x0) {
        local_58 = (**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250));
        lVar11 = DAT_09535440;
        goto LAB_074dc034;
      }
      goto LAB_074dc4d0;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = System_Type__GetTypeFromHandle(lVar11 + 0x20,0);
    auVar15 = System_Type__op_Equality(uVar9,uVar10,0);
    lVar11 = DAT_09535428;
    param_2 = auVar15._8_8_;
    if ((auVar15._0_8_ & 1) != 0) {
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
        lVar11 = DAT_09535418;
        goto LAB_074dc0b8;
      }
      goto LAB_074dc4d0;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = System_Type__GetTypeFromHandle(lVar11 + 0x20,0);
    auVar15 = System_Type__op_Equality(uVar9,uVar10,0);
    lVar11 = DAT_09535448;
    param_2 = auVar15._8_8_;
    if ((auVar15._0_8_ & 1) != 0) {
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 != (long *)0x0) {
        uVar7 = (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        lVar11 = DAT_09535428;
        goto LAB_074dbf8c;
      }
      goto LAB_074dc4d0;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = System_Type__GetTypeFromHandle(lVar11 + 0x20,0);
    auVar15 = System_Type__op_Equality(uVar9,uVar10,0);
    lVar11 = DAT_09535450;
    param_2 = auVar15._8_8_;
    if ((auVar15._0_8_ & 1) != 0) {
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 != (long *)0x0) {
        local_58 = (**(code **)(*plVar8 + 600))(plVar8,*(undefined8 *)(*plVar8 + 0x260));
        lVar11 = DAT_09535448;
        goto LAB_074dc034;
      }
      goto LAB_074dc4d0;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = System_Type__GetTypeFromHandle(lVar11 + 0x20,0);
    auVar15 = System_Type__op_Equality(uVar9,uVar10,0);
    lVar11 = DAT_09535458;
    param_2 = auVar15._8_8_;
    if ((auVar15._0_8_ & 1) != 0) {
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 != (long *)0x0) {
        uVar7 = (**(code **)(*plVar8 + 0x268))(plVar8,*(undefined8 *)(*plVar8 + 0x270));
        local_58 = CONCAT44(local_58._4_4_,uVar7);
        lVar11 = DAT_09535450;
LAB_074dc2c0:
        puVar12 = &local_58;
        goto LAB_074dc03c;
      }
      goto LAB_074dc4d0;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = System_Type__GetTypeFromHandle(lVar11 + 0x20,0);
    auVar15 = System_Type__op_Equality(uVar9,uVar10,0);
    uVar10 = DAT_09171448;
    param_2 = auVar15._8_8_;
    if ((auVar15._0_8_ & 1) != 0) {
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 != (long *)0x0) {
        local_58 = (**(code **)(*plVar8 + 0x278))(plVar8,*(undefined8 *)(*plVar8 + 0x280));
        lVar11 = DAT_09535458;
        goto LAB_074dc2c0;
      }
      goto LAB_074dc4d0;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
    auVar15 = System_Type__op_Equality(uVar9,uVar10,0);
    uVar10 = DAT_09173188;
    param_2 = auVar15._8_8_;
    if ((auVar15._0_8_ & 1) != 0) {
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 != (long *)0x0) {
        uVar9 = (**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250));
        local_58 = 0;
        System_DateTime___ctor(&local_58,uVar9,0);
        puVar12 = &local_70;
        local_70 = local_58;
        lVar11 = DAT_09183548;
        goto LAB_074dc03c;
      }
      goto LAB_074dc4d0;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
    auVar15 = System_Type__op_Equality(uVar9,uVar10,0);
    uVar10 = DAT_09171520;
    param_2 = auVar15._8_8_;
    if ((auVar15._0_8_ & 1) != 0) {
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 != (long *)0x0) {
        local_58 = (**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250));
        lVar11 = DAT_0918bd60;
        goto LAB_074dc034;
      }
      goto LAB_074dc4d0;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
    auVar15 = System_Type__op_Equality(uVar9,uVar10,0);
    if ((auVar15._0_8_ & 1) == 0) {
      if (*(long *)(lVar13 + 0x28) == local_48) {
        System_Resources_ResourceReader__DeserializeObject(param_1,iVar6);
        return;
      }
      goto LAB_074dc508;
    }
    auVar15 = FUN_03f5c394(DAT_091801b8,4);
    param_2 = auVar15._8_8_;
    lVar11 = auVar15._0_8_;
    if (lVar11 != 0) {
      if (0 < *(int *)(lVar11 + 0x18)) {
        uVar14 = 0;
        do {
          plVar8 = *(long **)(param_1 + 0x10);
          if (plVar8 == (long *)0x0) goto LAB_074dc4e4;
          auVar15 = (**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230));
          param_2 = auVar15._8_8_;
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 <= uVar14) {
            if (*(long *)(lVar13 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            goto LAB_074dc508;
          }
          *(int *)(lVar11 + 0x20 + uVar14 * 4) = auVar15._0_4_;
          uVar14 = uVar14 + 1;
        } while ((long)uVar14 < (long)(int)uVar1);
      }
      local_58 = 0;
      uStack_50 = 0;
      System_Decimal___ctor(&local_58,lVar11,0);
      uStack_68 = uStack_50;
      local_70 = local_58;
      auVar15 = FUN_03f5c42c(DAT_091837d8,&local_70);
      goto LAB_074dc040;
    }
LAB_074dc4e4:
    lVar13 = *(long *)(lVar13 + 0x28);
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  auVar15 = auVar3 << 0x40;
  if (lVar13 == local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_074dc508:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar15._0_8_,auVar15._8_8_);
}

