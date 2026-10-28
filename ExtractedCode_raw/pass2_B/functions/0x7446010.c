// rea decompile_all
// name: System.Text.UTF8Encoding$$GetByteCount
// address: 0x7446010
// body: available
// range: 0x7446010-0x7446607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7446568 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7446570 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7446574 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7446604 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Text_UTF8Encoding__GetByteCount(long *param_1,uint *param_2,int param_3,long *param_4)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  uint uVar12;
  uint *puVar13;
  uint *local_68;
  
  if ((DAT_0952109b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091958a0);
    FUN_03f5c2a4(&DAT_0918c558);
    DAT_0952109b = 1;
  }
  puVar1 = (uint *)((long)param_2 + (long)param_3 * 2);
  local_68 = (uint *)0x0;
  puVar10 = param_2;
  if (param_4 == (long *)0x0) {
    uVar12 = 0;
  }
  else {
    if (*param_4 != DAT_091958a0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_4);
    }
    uVar12 = *(uint *)(param_4 + 7);
    if (param_4[3] != 0) {
      plVar5 = (long *)System_Text_Encoder__get_FallbackBuffer(param_4);
      if (plVar5 == (long *)0x0) {
LAB_07446574:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar4 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (0 < iVar4) {
        uVar6 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
        FUN_039b1d98(param_4);
        lVar11 = param_4[2];
        FUN_039b1d98(lVar11);
        uVar7 = System_Object__GetType(lVar11,0);
        uVar8 = thunk_FUN_03fc39d4(&DAT_09208350);
        uVar6 = SR__Format(uVar8,uVar6,uVar7,0);
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar7 = thunk_FUN_03f9944c();
        System_ArgumentException___ctor(uVar7,uVar6,0);
        uVar6 = thunk_FUN_03fc39d4(&DAT_091dd940);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar7,uVar6);
      }
      plVar5[4] = (long)param_4;
      plVar5[2] = (long)param_2;
      plVar5[3] = (long)puVar1;
      thunk_FUN_03f5d7b8(plVar5 + 4,param_4);
      *(undefined2 *)(plVar5 + 5) = 0;
      *(undefined1 *)((long)plVar5 + 0x2a) = 0;
      *(undefined4 *)((long)plVar5 + 0x2c) = 0;
      goto LAB_07446104;
    }
  }
  plVar5 = (long *)0x0;
LAB_07446104:
  do {
    puVar13 = puVar10;
    if (puVar10 < puVar1) {
      if ((int)uVar12 < 1) {
        if (plVar5 != (long *)0x0) {
          uVar3 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
          *(bool *)((long)plVar5 + 0x2a) = uVar3 != 0;
          if (uVar3 != 0) goto LAB_07446284;
          *(undefined4 *)((long)plVar5 + 0x2c) = 0;
        }
        puVar13 = (uint *)((long)puVar10 + 2);
        uVar12 = (uint)(ushort)*puVar10;
        goto LAB_07446288;
      }
      uVar2 = *puVar10;
      if (*(int *)(DAT_0918c558 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      param_3 = param_3 + 1;
      if ((uVar2 & 0xfc00) == 0xdc00) {
        puVar10 = (uint *)((long)puVar10 + 2);
LAB_074461a4:
        uVar12 = 0xfffd;
      }
    }
    else {
      if (uVar12 == 0) {
        if (plVar5 != (long *)0x0) {
          uVar3 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
          *(bool *)((long)plVar5 + 0x2a) = uVar3 != 0;
          if (uVar3 != 0) goto LAB_07446284;
          *(undefined4 *)((long)plVar5 + 0x2c) = 0;
        }
LAB_074464fc:
        if (-1 < param_3) {
          return param_3;
        }
LAB_07446524:
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar6 = thunk_FUN_03f9944c();
        uVar7 = thunk_FUN_03fc39d4(&DAT_091ff160);
        System_ArgumentException___ctor(uVar6,uVar7,0);
        uVar7 = thunk_FUN_03fc39d4(&DAT_091dd940);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,uVar7);
      }
      if ((plVar5 != (long *)0x0) && (*(char *)((long)plVar5 + 0x2a) != '\0')) {
        uVar3 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
        *(bool *)((long)plVar5 + 0x2a) = uVar3 != 0;
        if (uVar3 == 0) {
          *(undefined4 *)((long)plVar5 + 0x2c) = 0;
        }
        if (*(int *)(DAT_0918c558 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if ((uVar3 & 0xfc00) != 0xdc00) {
          if (uVar3 != 0) goto LAB_07446284;
          goto LAB_074464fc;
        }
        param_3 = param_3 + 2;
        goto LAB_074461a4;
      }
      if (((int)uVar12 < 1) || ((param_4 != (long *)0x0 && ((char)param_4[6] == '\0'))))
      goto LAB_074464fc;
      param_3 = param_3 + 1;
    }
    do {
      if (*(int *)(DAT_0918c558 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (uVar12 >> 0xb == 0x1b) {
        if (plVar5 == (long *)0x0) {
          if (param_4 == (long *)0x0) {
            plVar5 = (long *)param_1[5];
            if (plVar5 == (long *)0x0) goto LAB_07446574;
            plVar5 = (long *)(**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180))
            ;
          }
          else {
            plVar5 = (long *)System_Text_Encoder__get_FallbackBuffer(param_4);
          }
          if (plVar5 == (long *)0x0) goto LAB_07446574;
          plVar5[4] = (long)param_4;
          plVar5[2] = (long)param_2;
          plVar5[3] = (long)puVar1;
          thunk_FUN_03f5d7b8(plVar5 + 4,param_4);
          *(undefined2 *)(plVar5 + 5) = 0;
          *(undefined1 *)((long)plVar5 + 0x2a) = 0;
          *(undefined4 *)((long)plVar5 + 0x2c) = 0;
        }
        local_68 = puVar10;
        (**(code **)(*plVar5 + 0x1d8))(plVar5,uVar12,&local_68,*(undefined8 *)(*plVar5 + 0x1e0));
        uVar12 = 0;
        puVar13 = local_68;
        break;
      }
      iVar4 = param_3;
      if (0x7ff < uVar12) {
        iVar4 = param_3 + 1;
      }
      if (0x7f < uVar12) {
        param_3 = iVar4 + 1;
      }
      if (param_3 < 0) goto LAB_07446524;
      if (plVar5 == (long *)0x0) {
LAB_074462b0:
        if (*(int *)(DAT_0918c558 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (0x1b < (uint)((long)puVar1 - (long)puVar10)) {
          puVar13 = (uint *)((long)puVar10 + (((long)puVar1 - (long)puVar10 & 0x1ffffffeU) - 0xe));
          goto LAB_074462d8;
        }
        do {
          if (puVar1 <= puVar10) goto LAB_074464fc;
          puVar13 = (uint *)((long)puVar10 + 2);
          uVar12 = (uint)(ushort)*puVar10;
          puVar10 = puVar13;
        } while (uVar12 < 0x80);
      }
      else {
        uVar3 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
        *(bool *)((long)plVar5 + 0x2a) = uVar3 != 0;
        puVar13 = puVar10;
        if (uVar3 == 0) {
          *(undefined4 *)((long)plVar5 + 0x2c) = 0;
          goto LAB_074462b0;
        }
LAB_07446284:
        uVar12 = (uint)uVar3;
        param_3 = param_3 + 1;
      }
LAB_07446288:
      if (*(int *)(DAT_0918c558 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar10 = puVar13;
    } while ((uVar12 & 0xfc00) != 0xd800);
    param_3 = param_3 + -1;
    puVar10 = puVar13;
  } while( true );
LAB_074462d8:
  uVar12 = 0;
  if (puVar10 < puVar13) {
    uVar3 = (ushort)*puVar10;
    puVar9 = (uint *)((long)puVar10 + 2);
    if (uVar3 < 0x80) {
LAB_07446310:
      if (((uint)puVar10 >> 1 & 1) != 0) goto LAB_07446348;
      uVar3 = *(ushort *)((long)puVar10 + 2);
      puVar9 = puVar10 + 1;
      if (uVar3 < 0x80) goto LAB_07446348;
      if (0x7ff < uVar3) {
        if ((uVar3 & 0xf800) == 0xd800) goto LAB_07446338;
        param_3 = param_3 + 1;
      }
      param_3 = param_3 + 1;
LAB_07446348:
      do {
        if (puVar13 <= puVar9) {
          uVar12 = 0;
          puVar10 = puVar9;
          goto LAB_07446104;
        }
        uVar12 = *puVar9;
        uVar2 = puVar9[1];
        if (((uVar2 | uVar12) & 0xff80ff80) != 0) {
          puVar10 = puVar9;
          if (((uVar2 | uVar12) & 0xf800f800) != 0) goto LAB_074463d0;
          if ((uVar12 & 0xff800000) != 0) {
            param_3 = param_3 + 1;
          }
          if ((uVar12 & 0xff80) != 0) {
            param_3 = param_3 + 1;
          }
          if ((uVar2 & 0xff800000) != 0) {
            param_3 = param_3 + 1;
          }
          if ((uVar2 & 0xff80) != 0) {
            param_3 = param_3 + 1;
          }
        }
        puVar10 = puVar9 + 2;
        uVar12 = *puVar10;
        uVar2 = puVar9[3];
        if (((uVar2 | uVar12) & 0xff80ff80) != 0) {
          if (((uVar2 | uVar12) & 0xf800f800) != 0) goto LAB_074463d0;
          if ((uVar12 & 0xff800000) != 0) {
            param_3 = param_3 + 1;
          }
          if ((uVar12 & 0xff80) != 0) {
            param_3 = param_3 + 1;
          }
          if ((uVar2 & 0xff800000) != 0) {
            param_3 = param_3 + 1;
          }
          if ((uVar2 & 0xff80) != 0) {
            param_3 = param_3 + 1;
          }
        }
        puVar9 = puVar9 + 4;
      } while( true );
    }
    if (uVar3 < 0x800) {
LAB_0744630c:
      param_3 = param_3 + 1;
      goto LAB_07446310;
    }
    if ((uVar3 & 0xf800) != 0xd800) {
      param_3 = param_3 + 1;
      goto LAB_0744630c;
    }
LAB_07446338:
    uVar12 = (uint)uVar3;
    puVar10 = puVar9;
    goto LAB_074463e8;
  }
  goto LAB_07446104;
LAB_074463d0:
  uVar12 = uVar12 & 0xffff;
  puVar10 = (uint *)((long)puVar10 + 2);
  if (uVar12 < 0x80) goto LAB_074462d8;
  if (0x7ff < uVar12) {
LAB_074463e8:
    if (*(int *)(DAT_0918c558 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((uVar12 & 0xf800) == 0xd800) {
      if (0x36 < uVar12 >> 10) {
LAB_074464ec:
        uVar12 = 0;
        puVar10 = (uint *)((long)puVar10 + -2);
        goto LAB_07446104;
      }
      uVar12 = *puVar10;
      if (*(int *)(DAT_0918c558 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((uVar12 & 0xfc00) != 0xdc00) goto LAB_074464ec;
      puVar10 = (uint *)((long)puVar10 + 2);
    }
    param_3 = param_3 + 1;
  }
  param_3 = param_3 + 1;
  goto LAB_074462d8;
}

