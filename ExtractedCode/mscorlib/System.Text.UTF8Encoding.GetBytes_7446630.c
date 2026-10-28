// rea decompile_all
// name: System.Text.UTF8Encoding$$GetBytes
// address: 0x7446630
// body: available
// range: 0x7446630-0x7446d77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7446ce0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7446ce4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7446d74 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Text_UTF8Encoding__GetBytes
              (long *param_1,uint *param_2,int param_3,byte *param_4,int param_5,long *param_6)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  byte *pbVar11;
  ulong uVar12;
  byte bVar13;
  uint *puVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  byte *pbVar19;
  uint *puVar20;
  uint *local_68;
  
  if ((DAT_0952109c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091958a0);
    FUN_03f5c2a4(&DAT_0918c558);
    DAT_0952109c = 1;
  }
  puVar1 = (uint *)((long)param_2 + (long)param_3 * 2);
  local_68 = (uint *)0x0;
  if (param_6 == (long *)0x0) {
    uVar17 = 0;
  }
  else {
    if (*param_6 != DAT_091958a0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_6);
    }
    uVar17 = *(uint *)(param_6 + 7);
    if (param_6[3] != 0) {
      plVar6 = (long *)System_Text_Encoder__get_FallbackBuffer(param_6);
      if (plVar6 == (long *)0x0) {
LAB_07446ce4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar5 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      if ((0 < iVar5) && (*(char *)((long)param_6 + 0x31) != '\0')) {
        uVar7 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
        FUN_039b1d98(param_6);
        lVar15 = param_6[2];
        FUN_039b1d98(lVar15);
        uVar8 = System_Object__GetType(lVar15,0);
        uVar9 = thunk_FUN_03fc39d4(&DAT_09208350);
        uVar7 = SR__Format(uVar9,uVar7,uVar8,0);
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar8 = thunk_FUN_03f9944c();
        System_ArgumentException___ctor(uVar8,uVar7,0);
        uVar7 = thunk_FUN_03fc39d4(&DAT_091dd958);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar8,uVar7);
      }
      plVar6[4] = (long)param_6;
      plVar6[2] = (long)param_2;
      plVar6[3] = (long)puVar1;
      thunk_FUN_03f5d7b8(plVar6 + 4,param_6);
      *(undefined1 *)((long)plVar6 + 0x2a) = 0;
      *(undefined2 *)(plVar6 + 5) = 1;
      *(undefined4 *)((long)plVar6 + 0x2c) = 0;
      goto LAB_07446720;
    }
  }
  plVar6 = (long *)0x0;
LAB_07446720:
  pbVar19 = param_4;
  puVar14 = param_2;
LAB_07446734:
  do {
    if (puVar1 <= puVar14) {
      if (uVar17 == 0) {
        if (plVar6 == (long *)0x0) goto LAB_07446c8c;
        uVar4 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
        *(bool *)((long)plVar6 + 0x2a) = uVar4 != 0;
        if (uVar4 != 0) goto LAB_07446964;
        uVar17 = 0;
        *(undefined4 *)((long)plVar6 + 0x2c) = 0;
LAB_07446c90:
        iVar5 = (int)pbVar19;
        if (param_6 == (long *)0x0) goto LAB_07446cac;
      }
      else {
        if ((plVar6 != (long *)0x0) && (*(char *)((long)plVar6 + 0x2a) != '\0')) {
          uVar4 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
          *(bool *)((long)plVar6 + 0x2a) = uVar4 != 0;
          if (uVar4 == 0) {
            *(undefined4 *)((long)plVar6 + 0x2c) = 0;
          }
          if (*(int *)(DAT_0918c558 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if ((uVar4 & 0xfc00) == 0xdc00) {
            uVar17 = uVar17 * 0x400 + -0x35fdc00 + (uint)uVar4;
            goto LAB_0744688c;
          }
          uVar17 = (uint)uVar4;
          if (uVar4 != 0) goto LAB_0744686c;
LAB_07446c8c:
          uVar17 = 0;
          goto LAB_07446c90;
        }
        if ((int)uVar17 < 1) goto LAB_07446c90;
        if ((param_6 == (long *)0x0) || ((char)param_6[6] != '\0')) goto LAB_0744688c;
      }
      iVar5 = (int)pbVar19;
      uVar12 = (long)puVar14 - (long)param_2;
      if ((long)uVar12 < 0) {
        uVar12 = uVar12 + 1;
      }
      *(int *)((long)param_6 + 0x34) = (int)(uVar12 >> 1);
      *(uint *)(param_6 + 7) = uVar17;
LAB_07446cac:
      return iVar5 - (int)param_4;
    }
    if ((int)uVar17 < 1) {
      if (plVar6 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
        *(bool *)((long)plVar6 + 0x2a) = uVar4 != 0;
        if (uVar4 != 0) goto LAB_07446964;
        *(undefined4 *)((long)plVar6 + 0x2c) = 0;
      }
      uVar17 = *puVar14;
      puVar14 = (uint *)((long)puVar14 + 2);
      uVar17 = (uint)(ushort)uVar17;
      goto LAB_0744686c;
    }
    uVar16 = *puVar14;
    if (*(int *)(DAT_0918c558 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (((ushort)uVar16 & 0xfc00) == 0xdc00) {
      puVar14 = (uint *)((long)puVar14 + 2);
      uVar17 = uVar17 * 0x400 + -0x35fdc00 + (uint)(ushort)uVar16;
    }
LAB_0744688c:
    do {
      if (*(int *)(DAT_0918c558 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (uVar17 >> 0xb == 0x1b) {
        if (plVar6 == (long *)0x0) {
          if (param_6 == (long *)0x0) {
            plVar6 = (long *)param_1[5];
            if (plVar6 == (long *)0x0) goto LAB_07446ce4;
            plVar6 = (long *)(**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180))
            ;
          }
          else {
            plVar6 = (long *)System_Text_Encoder__get_FallbackBuffer(param_6);
          }
          if (plVar6 == (long *)0x0) goto LAB_07446ce4;
          plVar6[4] = (long)param_6;
          plVar6[2] = (long)param_2;
          plVar6[3] = (long)puVar1;
          thunk_FUN_03f5d7b8(plVar6 + 4,param_6);
          *(undefined1 *)((long)plVar6 + 0x2a) = 0;
          *(undefined2 *)(plVar6 + 5) = 1;
          *(undefined4 *)((long)plVar6 + 0x2c) = 0;
        }
        local_68 = puVar14;
        (**(code **)(*plVar6 + 0x1d8))(plVar6,uVar17,&local_68,*(undefined8 *)(*plVar6 + 0x1e0));
        puVar14 = local_68;
        goto LAB_07446b58;
      }
      lVar15 = -4;
      if (uVar17 < 0x10000) {
        lVar15 = -3;
      }
      lVar2 = -2;
      if (0x7ff < uVar17) {
        lVar2 = lVar15;
      }
      if ((int)uVar17 < 0x80) {
        lVar2 = -1;
      }
      if (param_4 + param_5 + lVar2 < pbVar19) {
        if ((plVar6 == (long *)0x0) || (*(char *)((long)plVar6 + 0x2a) == '\0')) {
          if ((int)uVar17 < 0x10000) {
            puVar14 = (uint *)((long)puVar14 + -2);
          }
          else {
            puVar14 = puVar14 + -1;
          }
        }
        else {
          (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
          if (0xffff < (int)uVar17) {
            (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
          }
        }
        System_Text_Encoding__ThrowBytesOverflow(param_1,param_6,pbVar19 == param_4,0);
        goto LAB_07446c8c;
      }
      if ((int)uVar17 < 0x80) {
        *pbVar19 = (byte)uVar17;
      }
      else {
        if (uVar17 < 0x800) {
          bVar10 = (byte)(uVar17 >> 6) | 0xc0;
        }
        else {
          if (uVar17 >> 0x10 == 0) {
            bVar10 = (byte)(uVar17 >> 0xc) | 0xe0;
            pbVar11 = pbVar19;
          }
          else {
            bVar10 = (byte)(uVar17 >> 0xc) & 0x3f | 0x80;
            *pbVar19 = (byte)(uVar17 >> 0x12) | 0xf0;
            pbVar11 = pbVar19 + 1;
          }
          pbVar19 = pbVar11 + 1;
          *pbVar11 = bVar10;
          bVar10 = (byte)(uVar17 >> 6) & 0x3f | 0x80;
        }
        *pbVar19 = bVar10;
        pbVar19 = pbVar19 + 1;
        *pbVar19 = (byte)uVar17 & 0x3f | 0x80;
      }
      pbVar19 = pbVar19 + 1;
      if (plVar6 == (long *)0x0) {
LAB_07446970:
        if (*(int *)(DAT_0918c558 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar17 = (int)puVar1 - (int)puVar14;
        uVar16 = uVar17 >> 1;
        uVar3 = (int)(param_4 + param_5) - (int)pbVar19;
        if (0x1b < uVar17) {
          uVar17 = 0;
          if ((int)uVar3 <= (int)uVar16) {
            uVar16 = uVar3;
          }
          puVar18 = (uint *)((long)puVar14 + (long)(int)uVar16 * 2 + -10);
          puVar20 = puVar14;
          if (puVar14 < puVar18) goto LAB_074469b0;
          break;
        }
        if ((int)uVar3 < (int)uVar16) goto LAB_07446b58;
        while( true ) {
          if (puVar1 <= puVar14) goto LAB_07446c8c;
          puVar20 = (uint *)((long)puVar14 + 2);
          uVar4 = (ushort)*puVar14;
          puVar14 = puVar20;
          uVar17 = (uint)uVar4;
          if (0x7f < uVar4) break;
          *pbVar19 = (byte)uVar4;
          pbVar19 = pbVar19 + 1;
        }
      }
      else {
        uVar4 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
        *(bool *)((long)plVar6 + 0x2a) = uVar4 != 0;
        if (uVar4 == 0) {
          *(undefined4 *)((long)plVar6 + 0x2c) = 0;
          goto LAB_07446970;
        }
LAB_07446964:
        uVar17 = (uint)uVar4;
      }
LAB_0744686c:
      if (*(int *)(DAT_0918c558 + 0xe4) == 0) {
        FUN_03f5c424();
      }
    } while ((uVar17 & 0xfc00) != 0xd800);
  } while( true );
LAB_074469b0:
  do {
    puVar14 = (uint *)((long)puVar20 + 2);
    uVar4 = (ushort)*puVar20;
    uVar16 = (uint)uVar4;
    pbVar11 = pbVar19;
    if (uVar4 < 0x80) {
      pbVar11 = pbVar19 + 1;
      *pbVar19 = (byte)uVar4;
      if (((uint)puVar20 >> 1 & 1) == 0) {
        uVar4 = *(ushort *)((long)puVar20 + 2);
        uVar16 = (uint)uVar4;
        puVar14 = puVar20 + 1;
        if (0x7f < uVar4) goto LAB_07446a6c;
        pbVar19[1] = (byte)uVar4;
        pbVar11 = pbVar19 + 2;
      }
      while (pbVar19 = pbVar11, puVar14 < puVar18) {
        uVar17 = *puVar14;
        uVar16 = puVar14[1];
        if (((uVar16 | uVar17) & 0xff80ff80) != 0) {
          uVar16 = uVar17 & 0xffff;
          puVar14 = (uint *)((long)puVar14 + 2);
          if (0x7f < uVar16) goto LAB_07446a6c;
          pbVar19 = pbVar11 + 1;
          *pbVar11 = (byte)uVar17;
          break;
        }
        *pbVar11 = (byte)uVar17;
        pbVar11[2] = (byte)uVar16;
        pbVar11[1] = (byte)(uVar17 >> 0x10);
        pbVar11[3] = (byte)(uVar16 >> 0x10);
        pbVar11 = pbVar11 + 4;
        puVar14 = puVar14 + 2;
      }
      puVar20 = puVar14;
      if (puVar18 <= puVar14) goto LAB_07446b58;
      goto LAB_074469b0;
    }
LAB_07446a6c:
    if (uVar16 < 0x800) {
      bVar10 = (byte)(uVar16 >> 6) | 0xc0;
    }
    else {
      if (*(int *)(DAT_0918c558 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((uVar16 & 0xf800) == 0xd800) {
        pbVar19 = pbVar11;
        if (0x36 < uVar16 >> 10) {
          uVar17 = 0;
          puVar14 = (uint *)((long)puVar14 + -2);
          break;
        }
        uVar17 = *puVar14;
        if (*(int *)(DAT_0918c558 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (((ushort)uVar17 & 0xfc00) != 0xdc00) {
          uVar17 = 0;
          puVar14 = (uint *)((long)puVar14 + -2);
          break;
        }
        uVar16 = uVar16 * 0x400 + -0x35fdc00 + (uint)(ushort)uVar17;
        bVar13 = (byte)(uVar16 >> 0xc) & 0x3f | 0x80;
        *pbVar11 = (byte)(uVar16 >> 0x12) | 0xf0;
        pbVar11 = pbVar11 + 1;
        puVar14 = (uint *)((long)puVar14 + 2);
      }
      else {
        bVar13 = (byte)(uVar16 >> 0xc) | 0xe0;
      }
      puVar18 = (uint *)((long)puVar18 + -2);
      bVar10 = (byte)(uVar16 >> 6) & 0x3f | 0x80;
      *pbVar11 = bVar13;
      pbVar11 = pbVar11 + 1;
    }
    puVar18 = (uint *)((long)puVar18 + -2);
    uVar17 = 0;
    *pbVar11 = bVar10;
    pbVar11[1] = (byte)uVar16 & 0x3f | 0x80;
    pbVar19 = pbVar11 + 2;
    puVar20 = puVar14;
  } while (puVar14 < puVar18);
  goto LAB_07446734;
LAB_07446b58:
  uVar17 = 0;
  goto LAB_07446734;
}

