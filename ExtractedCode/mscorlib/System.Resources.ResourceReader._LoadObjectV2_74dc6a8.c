// rea decompile_all
// name: System.Resources.ResourceReader$$_LoadObjectV2
// address: 0x74dc6a8
// body: available
// range: 0x74dc6a8-0x74dcdfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74dcc20 to 0x74dc50c System.Resources.ResourceReader$$DeserializeObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74dcce4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dcd44 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dcdf8 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Resources_ResourceReader___LoadObjectV2(long param_1,int param_2,int *param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_0952157d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_09189168);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918c878);
    DAT_0952157d = 1;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if ((plVar6 == (long *)0x0) ||
     (plVar6 = (long *)(**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400)),
     plVar6 == (long *)0x0)) goto LAB_074dccd4;
  (**(code **)(*plVar6 + 0x348))
            (plVar6,*(long *)(param_1 + 0x28) + (long)param_2,0,*(undefined8 *)(*plVar6 + 0x350));
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_074dccd4;
  iVar4 = System_IO_BinaryReader__Read7BitEncodedInt(*(long *)(param_1 + 0x10),0);
  *param_3 = iVar4;
  uVar11 = 0;
  switch(iVar4) {
  case 0:
    goto switchD_074dc798_caseD_0;
  case 1:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x074dc7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
        return uVar11;
      }
      goto LAB_074dcdf8;
    }
    break;
  case 2:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 == (long *)0x0) break;
    uVar2 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
    local_48._0_8_ = CONCAT71(local_48._1_7_,uVar2) & 0xffffffffffffff01;
    lVar7 = DAT_09535400;
LAB_074dcb94:
    uVar11 = FUN_03f5c42c(lVar7,local_48);
    goto switchD_074dc798_caseD_0;
  case 3:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar6 + 0x218))(plVar6,*(undefined8 *)(*plVar6 + 0x220));
      lVar7 = DAT_09535460;
LAB_074dc9c4:
      local_48._0_2_ = uVar3;
      goto LAB_074dcb94;
    }
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
      lVar7 = DAT_095353f0;
LAB_074dca38:
      local_48[0] = uVar2;
      goto LAB_074dcb94;
    }
    break;
  case 5:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
      lVar7 = DAT_09535408;
      goto LAB_074dca38;
    }
    break;
  case 6:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
      lVar7 = DAT_09535410;
      goto LAB_074dc9c4;
    }
    break;
  case 7:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar6 + 0x218))(plVar6,*(undefined8 *)(*plVar6 + 0x220));
      lVar7 = DAT_09535418;
      goto LAB_074dc9c4;
    }
    break;
  case 8:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      uVar12 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
      lVar7 = DAT_09535420;
LAB_074dca8c:
      local_48._0_4_ = uVar12;
      goto LAB_074dcb94;
    }
    break;
  case 9:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      uVar12 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
      lVar7 = DAT_09535428;
      goto LAB_074dca8c;
    }
    break;
  case 10:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      uVar11 = (**(code **)(*plVar6 + 0x248))(plVar6,*(undefined8 *)(*plVar6 + 0x250));
      local_48._0_8_ = uVar11;
      lVar7 = DAT_09535440;
      goto LAB_074dcb94;
    }
    break;
  case 0xb:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      uVar11 = (**(code **)(*plVar6 + 600))(plVar6,*(undefined8 *)(*plVar6 + 0x260));
      local_48._0_8_ = uVar11;
      lVar7 = DAT_09535448;
      goto LAB_074dcb94;
    }
    break;
  case 0xc:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      uVar12 = (**(code **)(*plVar6 + 0x268))(plVar6,*(undefined8 *)(*plVar6 + 0x270));
      local_48._0_4_ = uVar12;
      lVar7 = DAT_09535450;
      goto LAB_074dcb94;
    }
    break;
  case 0xd:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      uVar11 = (**(code **)(*plVar6 + 0x278))(plVar6,*(undefined8 *)(*plVar6 + 0x280));
      local_48._0_8_ = uVar11;
      lVar7 = DAT_09535458;
      goto LAB_074dcb94;
    }
    break;
  case 0xe:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      local_48 = (**(code **)(*plVar6 + 0x288))(plVar6,*(undefined8 *)(*plVar6 + 0x290));
      lVar7 = DAT_091837d8;
      goto LAB_074dcb94;
    }
    break;
  case 0xf:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      uVar11 = (**(code **)(*plVar6 + 0x248))(plVar6,*(undefined8 *)(*plVar6 + 0x250));
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183548);
      }
      uVar11 = System_DateTime__FromBinary(uVar11,0);
      local_48._0_8_ = uVar11;
      lVar7 = DAT_09183548;
      goto LAB_074dcb94;
    }
    break;
  case 0x10:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      uVar11 = (**(code **)(*plVar6 + 0x248))(plVar6,*(undefined8 *)(*plVar6 + 0x250));
      local_48._0_8_ = uVar11;
      lVar7 = DAT_0918bd60;
      goto LAB_074dcb94;
    }
    break;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    goto switchD_074dc798_caseD_11;
  case 0x20:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
      uVar10 = (ulong)uVar5;
      if ((int)uVar5 < 0) {
LAB_074dcd48:
        uVar11 = thunk_FUN_03fc39d4(&DAT_09180318);
        uVar11 = FUN_03f5c394(uVar11,1);
        local_48._0_4_ = uVar5;
        uVar9 = FUN_03f5c42c(DAT_09535420,local_48);
        FUN_039b1d98(uVar11);
        FUN_039b0da0(uVar11,uVar9);
        FUN_039af17c(uVar11,0,uVar9);
        uVar9 = thunk_FUN_03fc39d4(&DAT_091ff2f8);
        uVar9 = System_Environment__GetResourceString(uVar9,uVar11,0);
        thunk_FUN_03fc39d4(&DAT_091819f8);
        uVar11 = thunk_FUN_03f9944c();
        System_BadImageFormatException___ctor(uVar11,uVar9,0);
        uVar9 = thunk_FUN_03fc39d4(&DAT_091d7d10);
        if (*(long *)(lVar1 + 0x28) == local_38) goto LAB_074dcd3c;
        goto LAB_074dcdf8;
      }
      plVar6 = *(long **)(param_1 + 0x70);
      if (plVar6 == (long *)0x0) {
        plVar6 = *(long **)(param_1 + 0x10);
        if ((plVar6 != (long *)0x0) &&
           (plVar6 = (long *)(**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400)),
           plVar6 != (long *)0x0)) {
          lVar7 = (**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200));
          if (lVar7 < (long)uVar10) goto LAB_074dcd48;
          plVar6 = *(long **)(param_1 + 0x10);
          if (plVar6 != (long *)0x0) {
            if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x074dcc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar11 = (**(code **)(*plVar6 + 0x2c8))
                                 (plVar6,uVar10,*(undefined8 *)(*plVar6 + 0x2d0));
              return uVar11;
            }
            goto LAB_074dcdf8;
          }
        }
      }
      else {
        lVar7 = (**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200));
        plVar6 = *(long **)(param_1 + 0x70);
        if (plVar6 != (long *)0x0) {
          lVar8 = (**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
          if (lVar7 - lVar8 < (long)uVar10) goto LAB_074dcd48;
          uVar11 = FUN_03f5c394(DAT_0917fc88,uVar10);
          plVar6 = *(long **)(param_1 + 0x70);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x368))(plVar6,uVar11,0,uVar10,*(undefined8 *)(*plVar6 + 0x370));
            goto switchD_074dc798_caseD_0;
          }
        }
      }
    }
    break;
  case 0x21:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
      uVar10 = (ulong)uVar5;
      if ((int)uVar5 < 0) goto LAB_074dcd48;
      plVar6 = *(long **)(param_1 + 0x70);
      if (plVar6 == (long *)0x0) {
        plVar6 = *(long **)(param_1 + 0x10);
        if (plVar6 != (long *)0x0) {
          uVar9 = (**(code **)(*plVar6 + 0x2c8))(plVar6,uVar10,*(undefined8 *)(*plVar6 + 0x2d0));
          uVar11 = thunk_FUN_03f9944c(DAT_09189168);
          System_IO_PinnedBufferMemoryStream___ctor(uVar11,uVar9,0);
          goto switchD_074dc798_caseD_0;
        }
      }
      else {
        lVar7 = (**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200));
        plVar6 = *(long **)(param_1 + 0x70);
        if (plVar6 != (long *)0x0) {
          lVar8 = (**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
          if (lVar7 - lVar8 < (long)uVar10) goto LAB_074dcd48;
          if (*(long *)(param_1 + 0x70) != 0) {
            uVar9 = System_IO_UnmanagedMemoryStream__get_PositionPointer
                              (*(long *)(param_1 + 0x70),0);
            uVar11 = thunk_FUN_03f9944c(DAT_0918c878);
            System_IO_UnmanagedMemoryStream___ctor(uVar11,uVar9,uVar10,uVar10,1,0);
            goto switchD_074dc798_caseD_0;
          }
        }
      }
    }
    break;
  default:
    if (0x3f < iVar4) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
        uVar11 = System_Resources_ResourceReader__DeserializeObject(param_1,iVar4 + -0x40);
        return uVar11;
      }
      goto LAB_074dcdf8;
    }
    goto switchD_074dc798_caseD_11;
  }
LAB_074dccd4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_074dcdf8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_074dc798_caseD_11:
  uVar11 = thunk_FUN_03fc39d4(&DAT_091ff308);
  uVar9 = System_Environment__GetResourceString(uVar11,0);
  thunk_FUN_03fc39d4(&DAT_091819f8);
  uVar11 = thunk_FUN_03f9944c();
  System_BadImageFormatException___ctor(uVar11,uVar9,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    uVar9 = thunk_FUN_03fc39d4(&DAT_091d7d10);
LAB_074dcd3c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar11,uVar9);
  }
  goto LAB_074dcdf8;
switchD_074dc798_caseD_0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar11;
  }
  goto LAB_074dcdf8;
}

