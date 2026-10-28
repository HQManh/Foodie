// rea decompile_all
// name: CookingGraph.Execution.CookingVisualBindingAudit$$Validate
// address: 0x44a3690
// body: available
// range: 0x44a3690-0x44a4f8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44a42d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a46b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a4aa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a4e28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a4edc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a4ee0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a4ee4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a4ee8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a4eec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a4ef0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a4ef4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a4ef8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044a4b2c) */
/* WARNING: Removing unreachable block (ram,0x044a4354) */
/* WARNING: Removing unreachable block (ram,0x044a473c) */
/* WARNING: Removing unreachable block (ram,0x044a4f1c) */
/* WARNING: Removing unreachable block (ram,0x044a4f7c) */
/* WARNING: Removing unreachable block (ram,0x044a4f84) */

void CookingGraph_Execution_CookingVisualBindingAudit__Validate(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  uint local_fc;
  long *local_f8;
  undefined8 local_f0;
  long **pplStack_e8;
  undefined8 local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  long **pplStack_98;
  undefined8 local_90;
  undefined8 local_80;
  long **pplStack_78;
  undefined8 local_70;
  
  if ((DAT_095181ff & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9810);
    FUN_03f5c2a4(&DAT_091c9818);
    FUN_03f5c2a4(&DAT_091ca0e0);
    FUN_03f5c2a4(&DAT_091ca020);
    FUN_03f5c2a4(&DAT_091ca920);
    FUN_03f5c2a4(&DAT_091ca368);
    FUN_03f5c2a4(&DAT_091ca3b0);
    FUN_03f5c2a4(&DAT_091cb428);
    FUN_03f5c2a4(&DAT_091cb468);
    FUN_03f5c2a4(&DAT_091786a8);
    FUN_03f5c2a4(&DAT_09178688);
    FUN_03f5c2a4(&DAT_09178bd0);
    FUN_03f5c2a4(&DAT_09178768);
    FUN_03f5c2a4(&DAT_091786b8);
    FUN_03f5c2a4(&DAT_09178628);
    FUN_03f5c2a4(&DAT_09178770);
    FUN_03f5c2a4(&DAT_091786b0);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a7ff8);
    FUN_03f5c2a4(&DAT_091a7ff0);
    FUN_03f5c2a4(&DAT_091a82a0);
    FUN_03f5c2a4(&DAT_09179d80);
    FUN_03f5c2a4(&DAT_09179e18);
    FUN_03f5c2a4(&DAT_09185900);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a400);
    FUN_03f5c2a4(&DAT_0917a428);
    FUN_03f5c2a4(&DAT_0917a478);
    FUN_03f5c2a4(&DAT_0917a5c0);
    FUN_03f5c2a4(&DAT_0917aad0);
    FUN_03f5c2a4(&DAT_0917ab20);
    FUN_03f5c2a4(&DAT_0917aaa8);
    FUN_03f5c2a4(&DAT_0917ac88);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b310);
    FUN_03f5c2a4(&DAT_0917b4b0);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0580);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_0918b378);
    FUN_03f5c2a4(&DAT_091e80c0);
    FUN_03f5c2a4(&DAT_091e80c8);
    FUN_03f5c2a4(&DAT_091e80d0);
    FUN_03f5c2a4(&DAT_091e80d8);
    FUN_03f5c2a4(&DAT_091e80e0);
    FUN_03f5c2a4(&DAT_091e80e8);
    FUN_03f5c2a4(&DAT_091e80f0);
    FUN_03f5c2a4(&DAT_091e80f8);
    FUN_03f5c2a4(&DAT_091e8100);
    FUN_03f5c2a4(&DAT_0918f7b0);
    FUN_03f5c2a4(&DAT_092039b8);
    FUN_03f5c2a4(&DAT_0920cc80);
    FUN_03f5c2a4(&DAT_09207f48);
    FUN_03f5c2a4(&DAT_09207f70);
    DAT_095181ff = 1;
  }
  local_d0 = (long *)0x0;
  local_c8 = (long *)0x0;
  local_e0 = 0;
  local_d8 = (long *)0x0;
  local_f0 = 0;
  pplStack_e8 = (long **)0x0;
  local_f8 = (long *)0x0;
  local_fc = 0;
  if ((param_1 == 0) || (param_2 == (long *)0x0)) {
    puVar8 = &DAT_09223330;
    if (param_1 != 0) {
      puVar8 = (undefined8 *)&DAT_09218070;
    }
    uVar14 = thunk_FUN_03fc39d4(puVar8);
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar16 = thunk_FUN_03f9944c();
    System_ArgumentNullException___ctor(uVar16,uVar14,0);
    uVar14 = thunk_FUN_03fc39d4(&DAT_091c6960);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar16,uVar14);
  }
  lVar6 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar6,DAT_091b0558);
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_0918f7b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar8 = *(undefined8 **)(DAT_0918f7b0 + 0xb8);
  lVar15 = puVar8[1];
  if (lVar15 == 0) {
    if (*(int *)(DAT_0918f7b0 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar8 = *(undefined8 **)(DAT_0918f7b0 + 0xb8);
    }
    uVar16 = *puVar8;
    lVar15 = thunk_FUN_03f9944c(DAT_091786b0);
    FUN_05322d94(lVar15,uVar16,DAT_091e80c0,0);
    plVar7 = (long *)(*(long *)(DAT_0918f7b0 + 0xb8) + 8);
    *plVar7 = lVar15;
    thunk_FUN_03f5d7b8(plVar7,lVar15);
  }
  iVar1 = FUN_04adc4d0(uVar14,lVar15,DAT_091c9818);
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(DAT_0918f7b0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918f7b0);
  }
  puVar8 = *(undefined8 **)(DAT_0918f7b0 + 0xb8);
  lVar15 = puVar8[2];
  if (lVar15 == 0) {
    if (*(int *)(DAT_0918f7b0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f7b0);
      puVar8 = *(undefined8 **)(DAT_0918f7b0 + 0xb8);
    }
    uVar16 = *puVar8;
    lVar15 = thunk_FUN_03f9944c(DAT_09178628);
    FUN_05322d94(lVar15,uVar16,DAT_091e80c8,0);
    plVar7 = (long *)(*(long *)(DAT_0918f7b0 + 0xb8) + 0x10);
    *plVar7 = lVar15;
    thunk_FUN_03f5d7b8(plVar7,lVar15);
  }
  iVar2 = FUN_04adc4d0(uVar14,lVar15,DAT_091c9810);
  lVar15 = *param_2;
  uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == DAT_09185900) {
        puVar8 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_044a3b5c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185900,0);
LAB_044a3b5c:
  iVar3 = (*(code *)*puVar8)(param_2,puVar8[1]);
  if (iVar3 < iVar1) {
    local_80 = CONCAT44(local_80._4_4_,iVar1);
    uVar14 = FUN_03f5c42c(DAT_09535420,&local_80);
    lVar15 = *param_2;
    uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_09185900) {
          puVar8 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_044a3bd8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185900,0);
LAB_044a3bd8:
    uVar4 = (*(code *)*puVar8)(param_2,puVar8[1]);
    local_a0 = CONCAT44(local_a0._4_4_,uVar4);
    uVar16 = FUN_03f5c42c(DAT_09535420,&local_a0);
    uVar14 = System_String__Format(DAT_092039b8,uVar14,uVar16,0);
    lVar15 = DAT_091b0570;
    if (lVar6 == 0) goto LAB_044a4f18;
    lVar9 = *(long *)(lVar6 + 0x10);
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_044a4f18;
    uVar5 = *(uint *)(lVar6 + 0x18);
    if (uVar5 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar5 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar5 * 8 + 0x20) = uVar14;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar6,uVar14,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar15 = *param_2;
  uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == DAT_09185900) {
        puVar8 = (undefined8 *)(lVar15 + (long)(*piVar13 + 1) * 0x10 + 0x138);
        goto LAB_044a3cd0;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185900,1);
LAB_044a3cd0:
  iVar1 = (*(code *)*puVar8)(param_2,puVar8[1]);
  if (iVar1 < iVar2) {
    local_80 = CONCAT44(local_80._4_4_,iVar2);
    uVar14 = FUN_03f5c42c(DAT_09535420,&local_80);
    lVar15 = *param_2;
    uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_09185900) {
          puVar8 = (undefined8 *)(lVar15 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_044a3d54;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185900,1);
LAB_044a3d54:
    uVar4 = (*(code *)*puVar8)(param_2,puVar8[1]);
    local_a0 = CONCAT44(local_a0._4_4_,uVar4);
    uVar16 = FUN_03f5c42c(DAT_09535420,&local_a0);
    uVar14 = System_String__Format(DAT_0920cc80,uVar14,uVar16,0);
    lVar15 = DAT_091b0570;
    if (lVar6 == 0) goto LAB_044a4f18;
    lVar9 = *(long *)(lVar6 + 0x10);
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_044a4f18;
    uVar5 = *(uint *)(lVar6 + 0x18);
    if (uVar5 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar5 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar5 * 8 + 0x20) = uVar14;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar6,uVar14,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
  }
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_0918f7b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar8 = *(undefined8 **)(DAT_0918f7b0 + 0xb8);
  lVar15 = puVar8[3];
  if (lVar15 == 0) {
    if (*(int *)(DAT_0918f7b0 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar8 = *(undefined8 **)(DAT_0918f7b0 + 0xb8);
    }
    uVar16 = *puVar8;
    lVar15 = thunk_FUN_03f9944c(DAT_091786b8);
    FUN_0532343c(lVar15,uVar16,DAT_091e80d0,0);
    plVar7 = (long *)(*(long *)(DAT_0918f7b0 + 0xb8) + 0x18);
    *plVar7 = lVar15;
    thunk_FUN_03f5d7b8(plVar7,lVar15);
  }
  uVar14 = FUN_04af5db8(uVar14,lVar15,DAT_091ca368);
  lVar15 = thunk_FUN_03f9944c(DAT_09179d80);
  FUN_053d18e8(lVar15,uVar14,DAT_091a7ff0);
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_0918f7b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar8 = *(undefined8 **)(DAT_0918f7b0 + 0xb8);
  lVar9 = puVar8[4];
  if (lVar9 == 0) {
    if (*(int *)(DAT_0918f7b0 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar8 = *(undefined8 **)(DAT_0918f7b0 + 0xb8);
    }
    uVar16 = *puVar8;
    lVar9 = thunk_FUN_03f9944c(DAT_091786a8);
    FUN_05324070(lVar9,uVar16,DAT_091e80d8,0);
    plVar7 = (long *)(*(long *)(DAT_0918f7b0 + 0xb8) + 0x20);
    *plVar7 = lVar9;
    thunk_FUN_03f5d7b8(plVar7,lVar9);
  }
  uVar14 = FUN_04afab70(uVar14,lVar9,DAT_091ca920);
  if (*(int *)(DAT_0918f7b0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918f7b0);
  }
  puVar8 = *(undefined8 **)(DAT_0918f7b0 + 0xb8);
  lVar9 = puVar8[5];
  if (lVar9 == 0) {
    if (*(int *)(DAT_0918f7b0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f7b0);
      puVar8 = *(undefined8 **)(DAT_0918f7b0 + 0xb8);
    }
    uVar16 = *puVar8;
    lVar9 = thunk_FUN_03f9944c(DAT_09178768);
    FUN_053136a4(lVar9,uVar16,DAT_091e80e0,0);
    plVar7 = (long *)(*(long *)(DAT_0918f7b0 + 0xb8) + 0x28);
    *plVar7 = lVar9;
    thunk_FUN_03f5d7b8(plVar7,lVar9);
  }
  uVar14 = FUN_04b0beec(uVar14,lVar9,DAT_091cb468);
  if (*(int *)(DAT_0918f7b0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918f7b0);
  }
  puVar8 = *(undefined8 **)(DAT_0918f7b0 + 0xb8);
  lVar9 = puVar8[6];
  if (lVar9 == 0) {
    if (*(int *)(DAT_0918f7b0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f7b0);
      puVar8 = *(undefined8 **)(DAT_0918f7b0 + 0xb8);
    }
    uVar16 = *puVar8;
    lVar9 = thunk_FUN_03f9944c(DAT_09178770);
    FUN_05313d88(lVar9,uVar16,DAT_091e80e8,0);
    plVar7 = (long *)(*(long *)(DAT_0918f7b0 + 0xb8) + 0x30);
    *plVar7 = lVar9;
    thunk_FUN_03f5d7b8(plVar7,lVar9);
  }
  uVar14 = FUN_04af1108(uVar14,lVar9,DAT_091ca3b0);
  lVar9 = thunk_FUN_03f9944c(DAT_09179e18);
  FUN_053d6ef0(lVar9,uVar14,DAT_091a82a0);
  plVar7 = *(long **)(param_1 + 0x30);
  if (plVar7 != (long *)0x0) {
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_0917a478) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_044a4164;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a478,0);
LAB_044a4164:
    plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    pplStack_78 = &local_c8;
    local_80 = 0;
    do {
      local_c8 = plVar7;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_09185b10) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_044a41f0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_044a41f0:
      uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      plVar7 = local_c8;
      if ((uVar12 & 1) == 0) {
        if (local_c8 == (long *)0x0) goto LAB_044a4348;
        lVar10 = *local_c8;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 == 0) goto LAB_044a4320;
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_044a4308;
      }
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *local_c8;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_0917ab20) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_044a4254;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(local_c8,DAT_0917ab20,0);
LAB_044a4254:
      lVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uStack_b8 = *(undefined8 *)(lVar10 + 0x48);
      local_c0 = *(undefined8 *)(lVar10 + 0x40);
      local_b0 = *(undefined8 *)(lVar10 + 0x50);
      FUN_053d2af8(lVar15,&local_c0,DAT_091a7ff8);
      uStack_b8 = *(undefined8 *)(lVar10 + 0x60);
      local_c0 = *(undefined8 *)(lVar10 + 0x58);
      local_b0 = *(undefined8 *)(lVar10 + 0x68);
      FUN_053d2af8(lVar15,&local_c0,DAT_091a7ff8);
      plVar7 = local_c8;
      if (*(int *)(lVar10 + 0x34) == 0) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_053d8048(lVar9,*(undefined4 *)(lVar10 + 0x30),DAT_091a82b0);
        plVar7 = local_c8;
      }
    } while( true );
  }
  goto LAB_044a4f18;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_044a4308:
    if (*(long *)(piVar13 + -2) == DAT_09185a58) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_044a433c;
    }
  }
LAB_044a4320:
  puVar8 = (undefined8 *)FUN_03f95da8(local_c8,DAT_09185a58,0);
LAB_044a433c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_044a4348:
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(DAT_0918f7b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar8 = *(undefined8 **)(DAT_0918f7b0 + 0xb8);
  lVar10 = puVar8[7];
  if (lVar10 == 0) {
    if (*(int *)(DAT_0918f7b0 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar8 = *(undefined8 **)(DAT_0918f7b0 + 0xb8);
    }
    uVar16 = *puVar8;
    lVar10 = thunk_FUN_03f9944c(DAT_09178628);
    FUN_05322d94(lVar10,uVar16,DAT_091e80f0,0);
    plVar7 = (long *)(*(long *)(DAT_0918f7b0 + 0xb8) + 0x38);
    *plVar7 = lVar10;
    thunk_FUN_03f5d7b8(plVar7,lVar10);
  }
  plVar7 = (long *)FUN_04b0cafc(uVar14,lVar10,DAT_091cb428);
  if (plVar7 != (long *)0x0) {
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_0917a400) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_044a4460;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a400,0);
LAB_044a4460:
    plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
joined_r0x044a4478:
    local_d0 = plVar7;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_09185b10) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_044a44fc;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_044a44fc:
    uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    plVar7 = local_d0;
    if ((uVar12 & 1) != 0) {
      if (local_d0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *local_d0;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_0917aaa8) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_044a4560;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(local_d0,DAT_0917aaa8,0);
LAB_044a4560:
      lVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar7 = *(long **)(lVar10 + 0x28);
      if (plVar7 == (long *)0x0) {
LAB_044a4edc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar1 = 0;
      do {
        lVar11 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_0917b310) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_044a45cc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b310,0);
LAB_044a45cc:
        iVar2 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        plVar7 = local_d0;
        if (iVar2 <= iVar1) goto joined_r0x044a4478;
        local_80 = 0;
        pplStack_78 = (long **)0x0;
        local_70 = 0;
        CookingGraph_Execution_CookingEndpoint___ctor
                  (&local_80,4,*(undefined8 *)(lVar10 + 0x18),*(undefined4 *)(lVar10 + 0x20),iVar1);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        pplStack_98 = pplStack_78;
        local_a0 = local_80;
        local_90 = local_70;
        FUN_053d2af8(lVar15,&local_a0,DAT_091a7ff8);
        plVar7 = *(long **)(lVar10 + 0x28);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_0917b4b0) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_044a4678;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b4b0,0);
LAB_044a4678:
        lVar11 = (*(code *)*puVar8)(plVar7,iVar1,puVar8[1]);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_053d8048(lVar9,*(undefined4 *)(lVar11 + 0x10),DAT_091a82b0);
        plVar7 = *(long **)(lVar10 + 0x28);
        iVar1 = iVar1 + 1;
        if (plVar7 == (long *)0x0) goto LAB_044a4edc;
      } while( true );
    }
    if (local_d0 != (long *)0x0) {
      lVar10 = *local_d0;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_09185a58) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_044a4724;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(local_d0,DAT_09185a58,0);
LAB_044a4724:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
    }
    if (*(int *)(DAT_0918f7b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar8 = *(undefined8 **)(DAT_0918f7b0 + 0xb8);
    lVar10 = puVar8[8];
    if (lVar10 == 0) {
      if (*(int *)(DAT_0918f7b0 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar8 = *(undefined8 **)(DAT_0918f7b0 + 0xb8);
      }
      uVar14 = *puVar8;
      lVar10 = thunk_FUN_03f9944c(DAT_09178688);
      FUN_05312d20(lVar10,uVar14,DAT_091e80f8,0);
      plVar7 = (long *)(*(long *)(DAT_0918f7b0 + 0xb8) + 0x40);
      *plVar7 = lVar10;
      thunk_FUN_03f5d7b8(plVar7,lVar10);
    }
    if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09516ea3 == '\0') {
      FUN_03f5c2a4(&DAT_0918b378);
      DAT_09516ea3 = '\x01';
    }
    if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar7 = (long *)FUN_04aeae74(lVar15,lVar10,
                                  *(undefined8 *)(*(long *)(DAT_0918b378 + 0xb8) + 0x10),
                                  DAT_091ca0e0);
    if (plVar7 != (long *)0x0) {
      lVar15 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_0917a428) {
            puVar8 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_044a4890;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a428,0);
LAB_044a4890:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
joined_r0x044a48a8:
      do {
        local_d8 = plVar7;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar15 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_09185b10) {
              puVar8 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_044a491c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_044a491c:
        uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        plVar7 = local_d8;
        if ((uVar12 & 1) == 0) {
          if (local_d8 == (long *)0x0) goto LAB_044a4b20;
          lVar15 = *local_d8;
          uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar12 == 0) goto LAB_044a4af8;
          piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          goto LAB_044a4ae0;
        }
        if (local_d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar15 = *local_d8;
        uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_0917aad0) {
              puVar8 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_044a4980;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_03f95da8(local_d8,DAT_0917aad0,0);
LAB_044a4980:
        (*(code *)*puVar8)(&local_80,plVar7,puVar8[1]);
        lVar15 = *param_2;
        pplStack_e8 = pplStack_78;
        local_f0 = local_80;
        uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
        local_e0 = local_70;
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_09185900) {
              puVar8 = (undefined8 *)(lVar15 + (long)(*piVar13 + 2) * 0x10 + 0x138);
              goto LAB_044a49fc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185900,2);
LAB_044a49fc:
        pplStack_78 = pplStack_e8;
        local_80 = local_f0;
        local_70 = local_e0;
        uVar12 = (*(code *)*puVar8)(param_2,&local_80,puVar8[1]);
        plVar7 = local_d8;
      } while ((uVar12 & 1) != 0);
      uVar14 = CookingGraph_Execution_CookingEndpoint__ToString(&local_f0);
      uVar14 = System_String__Concat(DAT_09207f48,uVar14,0);
      lVar15 = DAT_091b0570;
      if (lVar6 != 0) {
        lVar10 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar5 = *(uint *)(lVar6 + 0x18);
          if (uVar5 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar5 + 1;
            *(undefined8 *)(lVar10 + (long)(int)uVar5 * 8 + 0x20) = uVar14;
            thunk_FUN_03f5d7b8();
            plVar7 = local_d8;
          }
          else {
            FUN_057e0c68(lVar6,uVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            plVar7 = local_d8;
          }
          goto joined_r0x044a48a8;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  goto LAB_044a4f18;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_044a4ae0:
    if (*(long *)(piVar13 + -2) == DAT_09185a58) {
      puVar8 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_044a4b14;
    }
  }
LAB_044a4af8:
  puVar8 = (undefined8 *)FUN_03f95da8(local_d8,DAT_09185a58,0);
LAB_044a4b14:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_044a4b20:
  if (*(int *)(DAT_0918f7b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar8 = *(undefined8 **)(DAT_0918f7b0 + 0xb8);
  lVar15 = puVar8[9];
  if (lVar15 == 0) {
    if (*(int *)(DAT_0918f7b0 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar8 = *(undefined8 **)(DAT_0918f7b0 + 0xb8);
    }
    uVar14 = *puVar8;
    lVar15 = thunk_FUN_03f9944c(DAT_09178bd0);
    FUN_05315cf4(lVar15,uVar14,DAT_091e8100,0);
    plVar7 = (long *)(*(long *)(DAT_0918f7b0 + 0xb8) + 0x48);
    *plVar7 = lVar15;
    thunk_FUN_03f5d7b8(plVar7,lVar15);
  }
  plVar7 = (long *)FUN_04aea844(lVar9,lVar15,DAT_091ca020);
  if (plVar7 != (long *)0x0) {
    lVar15 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_0917a5c0) {
          puVar8 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_044a4c34;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a5c0,0);
LAB_044a4c34:
    plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
joined_r0x044a4c4c:
    do {
      local_f8 = plVar7;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar15 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_09185b10) {
            puVar8 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_044a4cc0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_044a4cc0:
      uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      plVar7 = local_f8;
      if ((uVar12 & 1) == 0) {
        if (local_f8 == (long *)0x0) goto LAB_044a4ea0;
        lVar15 = *local_f8;
        uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar12 == 0) goto LAB_044a4e78;
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_044a4e60;
      }
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar15 = *local_f8;
      uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_0917ac88) {
            puVar8 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_044a4d24;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(local_f8,DAT_0917ac88,0);
LAB_044a4d24:
      uVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      lVar15 = *param_2;
      uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
      local_fc = uVar5;
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_09185900) {
            puVar8 = (undefined8 *)(lVar15 + (long)(*piVar13 + 3) * 0x10 + 0x138);
            goto LAB_044a4d90;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185900,3);
LAB_044a4d90:
      uVar12 = (*(code *)*puVar8)(param_2,uVar5,puVar8[1]);
      plVar7 = local_f8;
    } while ((uVar12 & 1) != 0);
    uVar14 = System_Int32__ToString(&local_fc,0);
    uVar14 = System_String__Concat(DAT_09207f70,uVar14,0);
    lVar15 = DAT_091b0570;
    if (lVar6 != 0) {
      lVar9 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar9 != 0) {
        uVar5 = *(uint *)(lVar6 + 0x18);
        if (uVar5 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar5 + 1;
          *(undefined8 *)(lVar9 + (long)(int)uVar5 * 8 + 0x20) = uVar14;
          thunk_FUN_03f5d7b8();
          plVar7 = local_f8;
        }
        else {
          FUN_057e0c68(lVar6,uVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          plVar7 = local_f8;
        }
        goto joined_r0x044a4c4c;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_044a4f18;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_044a4e60:
    if (*(long *)(piVar13 + -2) == DAT_09185a58) {
      puVar8 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_044a4e94;
    }
  }
LAB_044a4e78:
  puVar8 = (undefined8 *)FUN_03f95da8(local_f8,DAT_09185a58,0);
LAB_044a4e94:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_044a4ea0:
  if (lVar6 != 0) {
    FUN_057e0e94(lVar6,DAT_091b0580);
    return;
  }
LAB_044a4f18:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

