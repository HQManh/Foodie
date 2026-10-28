// rea decompile_all
// name: System.Convert$$ChangeType
// address: 0x7522178
// body: available
// range: 0x7522178-0x7522a17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75229a0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75229a4 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Convert__ChangeType(long param_1,uint param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined1 local_58 [16];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if ((DAT_095217a4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_091858c0);
    DAT_095217a4 = 1;
  }
  if (((param_1 == 0) && (param_2 < 0x13)) && ((1 << (ulong)(param_2 & 0x1f) & 0x40003U) != 0)) {
    param_1 = 0;
    goto switchD_0752221c_caseD_1;
  }
  plVar3 = (long *)thunk_FUN_03f99350(param_1,DAT_091858c0);
  if (plVar3 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_09187090);
    uVar7 = thunk_FUN_03f9944c();
    puVar6 = &DAT_09209518;
    goto LAB_07522968;
  }
  switch(param_2) {
  case 0:
    thunk_FUN_03fc39d4(&DAT_09187090);
    uVar7 = thunk_FUN_03f9944c();
    puVar6 = &DAT_09209410;
    goto LAB_07522968;
  case 1:
    goto switchD_0752221c_caseD_1;
  case 2:
    thunk_FUN_03fc39d4(&DAT_09187090);
    uVar7 = thunk_FUN_03f9944c();
    puVar6 = &DAT_09209408;
LAB_07522968:
    uVar8 = thunk_FUN_03fc39d4(puVar6);
    System_InvalidCastException___ctor(uVar7,uVar8,0);
LAB_0752297c:
    if (*(long *)(lVar5 + 0x28) == local_48) {
      uVar8 = thunk_FUN_03fc39d4(&DAT_091c6100);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar8);
    }
    goto LAB_075229a4;
  case 3:
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091858c0) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_07522880;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091858c0,1);
LAB_07522880:
    uVar1 = (*(code *)*puVar4)(plVar3,param_3,puVar4[1]);
    local_58._0_8_ = CONCAT71(local_58._1_7_,uVar1) & 0xffffffffffffff01;
    uVar7 = DAT_09535400;
    break;
  case 4:
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091858c0) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_075227b8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091858c0,2);
LAB_075227b8:
    uVar2 = (*(code *)*puVar4)(plVar3,param_3,puVar4[1]);
    uVar7 = DAT_09535460;
    goto LAB_0752290c;
  case 5:
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091858c0) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_0752284c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091858c0,3);
LAB_0752284c:
    uVar1 = (*(code *)*puVar4)(plVar3,param_3,puVar4[1]);
    uVar7 = DAT_09535408;
    goto LAB_07522868;
  case 6:
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091858c0) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
          goto LAB_07522754;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091858c0,4);
LAB_07522754:
    uVar1 = (*(code *)*puVar4)(plVar3,param_3,puVar4[1]);
    uVar7 = DAT_095353f0;
LAB_07522868:
    local_58[0] = uVar1;
    break;
  case 7:
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091858c0) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_075228f0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091858c0,5);
LAB_075228f0:
    uVar2 = (*(code *)*puVar4)(plVar3,param_3,puVar4[1]);
    uVar7 = DAT_09535410;
    goto LAB_0752290c;
  case 8:
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091858c0) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 6) * 0x10 + 0x138);
          goto LAB_075226e0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091858c0,6);
LAB_075226e0:
    uVar2 = (*(code *)*puVar4)(plVar3,param_3,puVar4[1]);
    uVar7 = DAT_09535418;
LAB_0752290c:
    local_58._0_2_ = uVar2;
    break;
  case 9:
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091858c0) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
          goto LAB_075227e8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091858c0,7);
LAB_075227e8:
    local_58._0_4_ = (*(code *)*puVar4)(plVar3,param_3,puVar4[1]);
    uVar7 = DAT_09535420;
    goto LAB_07522834;
  case 10:
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091858c0) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
          goto LAB_07522818;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091858c0,8);
LAB_07522818:
    local_58._0_4_ = (*(code *)*puVar4)(plVar3,param_3,puVar4[1]);
    uVar7 = DAT_09535428;
LAB_07522834:
    break;
  case 0xb:
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091858c0) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 9) * 0x10 + 0x138);
          goto LAB_0752267c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091858c0,9);
LAB_0752267c:
    uVar7 = (*(code *)*puVar4)(plVar3,param_3,puVar4[1]);
    local_58._0_8_ = uVar7;
    uVar7 = DAT_09535440;
    break;
  case 0xc:
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091858c0) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 10) * 0x10 + 0x138);
          goto LAB_075226ac;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091858c0,10);
LAB_075226ac:
    uVar7 = (*(code *)*puVar4)(plVar3,param_3,puVar4[1]);
    local_58._0_8_ = uVar7;
    uVar7 = DAT_09535448;
    break;
  case 0xd:
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091858c0) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xb) * 0x10 + 0x138);
          goto LAB_075228b8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091858c0,0xb);
LAB_075228b8:
    local_58._0_4_ = (*(code *)*puVar4)(plVar3,param_3,puVar4[1]);
    uVar7 = DAT_09535450;
    break;
  case 0xe:
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091858c0) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xc) * 0x10 + 0x138);
          goto LAB_07522618;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091858c0,0xc);
LAB_07522618:
    uVar7 = (*(code *)*puVar4)(plVar3,param_3,puVar4[1]);
    local_58._0_8_ = uVar7;
    uVar7 = DAT_09535458;
    break;
  case 0xf:
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091858c0) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xd) * 0x10 + 0x138);
          goto LAB_07522784;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091858c0,0xd);
LAB_07522784:
    local_58 = (*(code *)*puVar4)(plVar3,param_3,puVar4[1]);
    uVar7 = DAT_091837d8;
    break;
  case 0x10:
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091858c0) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
          goto LAB_0752264c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091858c0,0xe);
LAB_0752264c:
    uVar7 = (*(code *)*puVar4)(plVar3,param_3,puVar4[1]);
    local_58._0_8_ = uVar7;
    uVar7 = DAT_09183548;
    break;
  default:
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar7 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_09212378);
    System_ArgumentException___ctor(uVar7,uVar8);
    goto LAB_0752297c;
  case 0x12:
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091858c0) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xf) * 0x10 + 0x138);
          goto LAB_07522710;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091858c0,0xf);
LAB_07522710:
    if (*(long *)(lVar5 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x07522740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar5 = (*(code *)*puVar4)(plVar3,param_3,puVar4[1]);
      return lVar5;
    }
    goto LAB_075229a4;
  }
  param_1 = FUN_03f5c42c(uVar7,local_58);
switchD_0752221c_caseD_1:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return param_1;
  }
LAB_075229a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

