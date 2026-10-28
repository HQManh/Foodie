// rea decompile_all
// name: System.Runtime.Remoting.Channels.ChannelServices$$RegisterChannelConfig
// address: 0x74963bc
// body: available
// range: 0x74963bc-0x7496f7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7496d44 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7496e68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7496e74 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7496e80 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7496e84 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7496e90 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7496ef4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7496efc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7496f0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7496f78 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07496ef8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Runtime_Remoting_Channels_ChannelServices__RegisterChannelConfig(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  char local_64 [4];
  
  if ((DAT_09521330 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4a00);
    FUN_03f5c2a4(&DAT_09182498);
    FUN_03f5c2a4(&DAT_09182ac0);
    FUN_03f5c2a4(&DAT_09171b18);
    FUN_03f5c2a4(&DAT_09185770);
    FUN_03f5c2a4(&DAT_09171b20);
    FUN_03f5c2a4(&DAT_09185758);
    FUN_03f5c2a4(&DAT_09171b28);
    FUN_03f5c2a4(&DAT_09185790);
    FUN_03f5c2a4(&DAT_09171b90);
    FUN_03f5c2a4(&DAT_09171d78);
    FUN_03f5c2a4(&DAT_091865f0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091897c0);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091dc128);
    FUN_03f5c2a4(&DAT_09224438);
    DAT_09521330 = 1;
  }
  local_64[0] = '\0';
  if ((param_1 == 0) ||
     (plVar5 = (long *)System_Runtime_Remoting_ChannelData__get_ServerProviders(param_1,0),
     plVar5 == (long *)0x0)) goto LAB_07496e68;
  iVar2 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
  if (iVar2 + -1 < 0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar8 = (long *)0x0;
    iVar2 = iVar2 + -1;
    do {
      plVar5 = (long *)System_Runtime_Remoting_ChannelData__get_ServerProviders(param_1,0);
      if (plVar5 == (long *)0x0) goto LAB_07496e68;
      plVar5 = (long *)(**(code **)(*plVar5 + 0x2e8))(plVar5,iVar2,*(undefined8 *)(*plVar5 + 0x2f0))
      ;
      if (*(int *)(DAT_09182498 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182498);
        if (plVar5 != (long *)0x0) goto LAB_07496554;
LAB_0749656c:
        plVar5 = (long *)0x0;
      }
      else {
        if (plVar5 == (long *)0x0) goto LAB_0749656c;
LAB_07496554:
        if (*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_091897c0 + 0x130)) goto LAB_0749656c;
        if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_091897c0 + 0x130) * 8 + -8) !=
            DAT_091897c0) {
          plVar5 = (long *)0x0;
        }
      }
      lVar6 = System_Runtime_Remoting_Channels_ChannelServices__CreateProvider(plVar5);
      lVar15 = DAT_091865f0;
      if (lVar6 == 0) goto LAB_07496e68;
      plVar5 = (long *)thunk_FUN_03f99350(lVar6,DAT_091865f0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar6,lVar15);
      }
      lVar15 = *plVar5;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == DAT_091865f0) {
            puVar7 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_074965f4;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091865f0,0);
LAB_074965f4:
      (*(code *)*puVar7)(plVar5,plVar8,puVar7[1]);
      bVar1 = 0 < iVar2;
      plVar8 = plVar5;
      iVar2 = iVar2 + -1;
    } while (bVar1);
  }
  plVar8 = (long *)System_Runtime_Remoting_ChannelData__get_ClientProviders(param_1,0);
  if (plVar8 == (long *)0x0) goto LAB_07496e68;
  iVar2 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
  if (iVar2 + -1 < 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar9 = (long *)0x0;
    iVar2 = iVar2 + -1;
    do {
      plVar8 = (long *)System_Runtime_Remoting_ChannelData__get_ClientProviders(param_1,0);
      if (plVar8 == (long *)0x0) goto LAB_07496e68;
      plVar8 = (long *)(**(code **)(*plVar8 + 0x2e8))(plVar8,iVar2,*(undefined8 *)(*plVar8 + 0x2f0))
      ;
      if (*(int *)(DAT_09182498 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182498);
        if (plVar8 != (long *)0x0) goto LAB_07496698;
LAB_074966b0:
        plVar8 = (long *)0x0;
      }
      else {
        if (plVar8 == (long *)0x0) goto LAB_074966b0;
LAB_07496698:
        if (*(byte *)(*plVar8 + 0x130) < *(byte *)(DAT_091897c0 + 0x130)) goto LAB_074966b0;
        if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(DAT_091897c0 + 0x130) * 8 + -8) !=
            DAT_091897c0) {
          plVar8 = (long *)0x0;
        }
      }
      lVar6 = System_Runtime_Remoting_Channels_ChannelServices__CreateProvider(plVar8);
      lVar15 = DAT_09185790;
      if (lVar6 == 0) goto LAB_07496e68;
      plVar8 = (long *)thunk_FUN_03f99350(lVar6,DAT_09185790);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar6,lVar15);
      }
      lVar15 = *plVar8;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == DAT_09185790) {
            puVar7 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_07496738;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185790,0);
LAB_07496738:
      (*(code *)*puVar7)(plVar8,plVar9,puVar7[1]);
      bVar1 = 0 < iVar2;
      plVar9 = plVar8;
      iVar2 = iVar2 + -1;
    } while (bVar1);
  }
  uVar19 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar9 = (long *)FUN_03f5c738(uVar19,DAT_091dc128,DAT_091c4a00);
  uVar16 = System_Type__op_Equality(plVar9,0,0);
  uVar19 = DAT_09171b20;
  if ((uVar16 & 1) != 0) {
    FUN_039b1d98(param_1);
    uVar18 = *(undefined8 *)(param_1 + 0x18);
    uVar19 = thunk_FUN_03fc39d4(&DAT_09211138);
    uVar14 = thunk_FUN_03fc39d4(&DAT_091f7850);
    uVar19 = System_String__Concat(uVar19,uVar18,uVar14,0);
    goto LAB_07496f40;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar10 = (long *)System_Type__GetTypeFromHandle(uVar19,0);
  if (plVar10 == (long *)0x0) goto LAB_07496e68;
  uVar3 = (**(code **)(*plVar10 + 0x2b8))(plVar10,plVar9,*(undefined8 *)(*plVar10 + 0x2c0));
  plVar10 = (long *)System_Type__GetTypeFromHandle(DAT_09171b18,0);
  if (plVar10 == (long *)0x0) goto LAB_07496e68;
  uVar4 = (**(code **)(*plVar10 + 0x2b8))(plVar10,plVar9,*(undefined8 *)(*plVar10 + 0x2c0));
  if ((uVar3 & uVar4 & 1) == 0) {
    if ((uVar3 & 1) != 0) {
      plVar10 = (long *)FUN_03f5c394(DAT_09180748,2);
      uVar19 = DAT_09171b90;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      lVar15 = System_Type__GetTypeFromHandle(uVar19,0);
      if (plVar10 == (long *)0x0) goto LAB_07496e68;
      if ((lVar15 != 0) &&
         (lVar6 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0))
      goto LAB_07496e88;
      if ((int)plVar10[3] == 0) goto LAB_07496e84;
      plVar10[4] = lVar15;
      thunk_FUN_03f5d7b8(plVar10 + 4,lVar15);
      lVar15 = System_Type__GetTypeFromHandle(DAT_09171b28,0);
      if ((lVar15 != 0) &&
         (lVar6 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0))
      goto LAB_07496e88;
      if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_07496e84;
      plVar10[5] = lVar15;
      thunk_FUN_03f5d7b8(plVar10 + 5,lVar15);
      plVar11 = (long *)FUN_03f5c394(DAT_09180318,2);
      lVar15 = System_Runtime_Remoting_ChannelData__get_CustomProperties(param_1,0);
      if (plVar11 == (long *)0x0) goto LAB_07496e68;
      if ((lVar15 != 0) &&
         (lVar6 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar6 == 0))
      goto LAB_07496e88;
      if ((int)plVar11[3] == 0) goto LAB_07496e84;
      plVar11[4] = lVar15;
      thunk_FUN_03f5d7b8(plVar11 + 4,lVar15);
      if ((plVar8 != (long *)0x0) &&
         (lVar15 = thunk_FUN_03f99350(plVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
      goto LAB_07496e88;
      if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) goto LAB_07496e84;
      plVar12 = plVar11 + 5;
      *plVar12 = (long)plVar8;
      plVar5 = plVar8;
      goto LAB_07496cb4;
    }
    if ((uVar4 & 1) != 0) {
      plVar10 = (long *)FUN_03f5c394(DAT_09180748,2);
      uVar19 = DAT_09171b90;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      lVar15 = System_Type__GetTypeFromHandle(uVar19,0);
      if (plVar10 == (long *)0x0) goto LAB_07496e68;
      if ((lVar15 != 0) &&
         (lVar6 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0))
      goto LAB_07496e88;
      if ((int)plVar10[3] == 0) goto LAB_07496e84;
      plVar10[4] = lVar15;
      thunk_FUN_03f5d7b8(plVar10 + 4,lVar15);
      lVar15 = System_Type__GetTypeFromHandle(DAT_09171d78,0);
      if ((lVar15 != 0) &&
         (lVar6 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0))
      goto LAB_07496e88;
      if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_07496e84;
      plVar10[5] = lVar15;
      thunk_FUN_03f5d7b8(plVar10 + 5,lVar15);
      plVar11 = (long *)FUN_03f5c394(DAT_09180318,2);
      lVar15 = System_Runtime_Remoting_ChannelData__get_CustomProperties(param_1,0);
      if (plVar11 == (long *)0x0) goto LAB_07496e68;
      if ((lVar15 != 0) &&
         (lVar6 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar6 == 0))
      goto LAB_07496e88;
      if ((int)plVar11[3] == 0) goto LAB_07496e84;
      plVar11[4] = lVar15;
      thunk_FUN_03f5d7b8(plVar11 + 4,lVar15);
      if ((plVar5 != (long *)0x0) &&
         (lVar15 = thunk_FUN_03f99350(plVar5,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
      goto LAB_07496e88;
      if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) goto LAB_07496e84;
      plVar12 = plVar11 + 5;
      *plVar12 = (long)plVar5;
      goto LAB_07496cb4;
    }
    if (plVar9 == (long *)0x0) {
      uVar19 = 0;
    }
    else {
      uVar19 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    }
    puVar13 = &DAT_091f66b0;
  }
  else {
    plVar10 = (long *)FUN_03f5c394(DAT_09180748,3);
    uVar19 = DAT_09171b90;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    lVar15 = System_Type__GetTypeFromHandle(uVar19,0);
    if (plVar10 == (long *)0x0) goto LAB_07496e68;
    if ((lVar15 != 0) &&
       (lVar6 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
LAB_07496e88:
      uVar19 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar19,0);
    }
    if ((int)plVar10[3] == 0) {
LAB_07496e84:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar10[4] = lVar15;
    thunk_FUN_03f5d7b8(plVar10 + 4,lVar15);
    lVar15 = System_Type__GetTypeFromHandle(DAT_09171b28,0);
    if ((lVar15 != 0) &&
       (lVar6 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0))
    goto LAB_07496e88;
    if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_07496e84;
    plVar10[5] = lVar15;
    thunk_FUN_03f5d7b8(plVar10 + 5,lVar15);
    lVar15 = System_Type__GetTypeFromHandle(DAT_09171d78,0);
    if ((lVar15 != 0) &&
       (lVar6 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0))
    goto LAB_07496e88;
    if (*(uint *)(plVar10 + 3) < 3) goto LAB_07496e84;
    plVar10[6] = lVar15;
    thunk_FUN_03f5d7b8(plVar10 + 6,lVar15);
    plVar11 = (long *)FUN_03f5c394(DAT_09180318,3);
    lVar15 = System_Runtime_Remoting_ChannelData__get_CustomProperties(param_1,0);
    if (plVar11 == (long *)0x0) goto LAB_07496e68;
    if ((lVar15 != 0) &&
       (lVar6 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar6 == 0))
    goto LAB_07496e88;
    if ((int)plVar11[3] == 0) goto LAB_07496e84;
    plVar11[4] = lVar15;
    thunk_FUN_03f5d7b8(plVar11 + 4,lVar15);
    if ((plVar8 != (long *)0x0) &&
       (lVar15 = thunk_FUN_03f99350(plVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
    goto LAB_07496e88;
    if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) goto LAB_07496e84;
    plVar11[5] = (long)plVar8;
    thunk_FUN_03f5d7b8(plVar11 + 5,plVar8);
    if ((plVar5 != (long *)0x0) &&
       (lVar15 = thunk_FUN_03f99350(plVar5,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
    goto LAB_07496e88;
    if (*(uint *)(plVar11 + 3) < 3) goto LAB_07496e84;
    plVar12 = plVar11 + 6;
    *plVar12 = (long)plVar5;
LAB_07496cb4:
    thunk_FUN_03f5d7b8(plVar12,plVar5);
    if (plVar9 == (long *)0x0) {
LAB_07496e68:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar15 = System_Type__GetConstructor(plVar9,plVar10,0);
    if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182ac0);
    }
    uVar16 = System_Reflection_ConstructorInfo__op_Equality(lVar15,0,0);
    if ((uVar16 & 1) == 0) {
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar15 = System_Reflection_ConstructorInfo__Invoke(lVar15,plVar11,0);
      uVar19 = DAT_09185758;
      if (lVar15 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = thunk_FUN_03f99350(lVar15,DAT_09185758);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar15,uVar19);
        }
      }
      if (*(int *)(DAT_09182498 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar5 = (long *)**(long **)(DAT_09182498 + 0xb8);
      if (plVar5 != (long *)0x0) {
        uVar19 = (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
        local_64[0] = '\0';
        System_Threading_Monitor__Enter(uVar19,local_64,0);
        uVar16 = System_String__op_Equality(*(undefined8 *)(param_1 + 0x28),DAT_09224438,0);
        if (((uVar16 & 1) == 0) || (lVar15 = thunk_FUN_03f99350(lVar6,DAT_09185770), lVar15 != 0)) {
          if (*(int *)(DAT_09182498 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          System_Runtime_Remoting_Channels_ChannelServices__RegisterChannel(lVar6);
        }
        else {
          if (*(int *)(DAT_09182498 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar5 = *(long **)(*(long *)(DAT_09182498 + 0xb8) + 8);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          (**(code **)(*plVar5 + 0x308))(plVar5,lVar6,*(undefined8 *)(*plVar5 + 0x310));
        }
        if (local_64[0] != '\0') {
          System_Threading_Monitor__Exit(uVar19,0);
        }
        return;
      }
      goto LAB_07496e68;
    }
    uVar19 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    puVar13 = &DAT_091f6348;
  }
  uVar14 = thunk_FUN_03fc39d4(puVar13);
  uVar19 = System_String__Concat(uVar19,uVar14,0);
LAB_07496f40:
  thunk_FUN_03fc39d4(&DAT_09189ec8);
  uVar14 = thunk_FUN_03f9944c();
  System_Runtime_Remoting_RemotingException___ctor(uVar14,uVar19,0);
  uVar19 = thunk_FUN_03fc39d4(&DAT_091c4a00);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar14,uVar19);
}

