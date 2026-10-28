// rea decompile_all
// name: System.Security.Util.Tokenizer$$GetTokens
// address: 0x745777c
// body: available
// range: 0x745777c-0x7457fcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7457f58 to 0x7458944 System.Security.Util.TokenizerStream$$AddToken (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7457f7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7457f80 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7457fc8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Util_Tokenizer__GetTokens(long param_1,long param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  long *plVar20;
  uint uVar21;
  long *plVar22;
  int local_64;
  
  if ((DAT_09521134 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09195178);
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_09521134 = 1;
  }
LAB_074577e8:
  if (param_3 != -1) {
    if (param_2 == 0) goto LAB_07457f7c;
    if (param_3 <= *(int *)(param_2 + 0x10)) {
      return;
    }
  }
  lVar18 = *(long *)(param_1 + 0x48);
  if (lVar18 == 0) {
LAB_07457f7c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar22 = (long *)(lVar18 + 0x20);
  *plVar22 = 0;
  thunk_FUN_03f5d7b8(plVar22,0);
  bVar6 = false;
  local_64 = 0;
  *(undefined4 *)(lVar18 + 0x30) = 0;
  bVar7 = bVar6;
LAB_0745782c:
  uVar19 = *(uint *)(param_1 + 0x38);
  if (uVar19 == 0xffffffff) {
    iVar8 = *(int *)(param_1 + 0x3c);
    if (iVar8 < 3) {
      if (iVar8 == 0) {
        uVar21 = *(uint *)(param_1 + 0x30);
        uVar19 = uVar21 + 1;
        if (*(int *)(param_1 + 0x34) <= (int)uVar19) goto LAB_07457f30;
        lVar10 = *(long *)(param_1 + 0x18);
        if (lVar10 == 0) goto LAB_07457f7c;
        if ((*(uint *)(lVar10 + 0x18) <= uVar19) || (*(uint *)(lVar10 + 0x18) <= uVar21))
        goto LAB_07457f80;
        uVar3 = *(undefined1 *)(lVar10 + 0x20 + (long)(int)uVar19);
        uVar4 = *(undefined1 *)(lVar10 + 0x20 + (long)(int)uVar21);
        *(uint *)(param_1 + 0x30) = uVar21 + 2;
        uVar19 = (uint)CONCAT11(uVar3,uVar4);
      }
      else if (iVar8 == 1) {
        uVar21 = *(uint *)(param_1 + 0x30);
        iVar8 = *(int *)(param_1 + 0x34);
        lVar10 = (long)(int)uVar21;
        if (iVar8 <= (int)uVar21) goto LAB_07457f30;
        lVar14 = *(long *)(param_1 + 0x18);
        uVar16 = (uint)(lVar10 + 1);
        *(uint *)(param_1 + 0x30) = uVar16;
        if (lVar14 == 0) goto LAB_07457f7c;
        uVar1 = *(uint *)(lVar14 + 0x18);
        if (uVar1 <= uVar21) goto LAB_07457f80;
        bVar5 = *(byte *)(lVar14 + lVar10 + 0x20);
        uVar19 = (uint)bVar5;
        if ((char)bVar5 < '\0') {
          uVar17 = (uint)(bVar5 >> 4);
          if (uVar17 < 0xe) {
            if (uVar17 - 0xc < 2) {
              uVar19 = uVar19 & 0x1f;
              local_64 = 2;
            }
            else if (uVar17 - 8 < 4) goto LAB_07457f98;
          }
          else if (uVar17 == 0xe) {
            uVar19 = uVar19 & 0xf;
            local_64 = 3;
          }
          else if (uVar17 == 0xf) goto LAB_07457f98;
          if (iVar8 <= (int)uVar16) {
LAB_07457f84:
            uVar11 = thunk_FUN_03fc39d4(&DAT_09211cb0);
            System_Environment__GetResourceString(uVar11,0);
LAB_07457f98:
            thunk_FUN_03fc39d4(&DAT_0918d988);
            uVar11 = thunk_FUN_03f9944c();
            System_SystemException___ctor(uVar11,0);
            uVar12 = thunk_FUN_03fc39d4(&DAT_091db8c0);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar11,uVar12);
          }
          uVar17 = (uint)(lVar10 + 2);
          *(uint *)(param_1 + 0x30) = uVar17;
          if (uVar1 <= uVar16) goto LAB_07457f80;
          uVar16 = (uint)*(byte *)(lVar14 + lVar10 + 1 + 0x20);
          if ((uVar16 & 0xc0) != 0x80) goto LAB_07457f98;
          uVar19 = uVar16 & 0x3f | uVar19 << 6;
          if (local_64 == 2) {
            local_64 = 2;
          }
          else {
            if (iVar8 <= (int)uVar17) goto LAB_07457f84;
            *(uint *)(param_1 + 0x30) = uVar21 + 3;
            if (uVar1 <= uVar17) goto LAB_07457f80;
            uVar21 = (uint)*(byte *)(lVar14 + lVar10 + 2 + 0x20);
            if ((uVar21 & 0xc0) != 0x80) goto LAB_07457f98;
            uVar19 = uVar21 & 0x3f | uVar19 << 6;
          }
        }
      }
      else if (iVar8 == 2) {
        uVar19 = *(uint *)(param_1 + 0x30);
        if (*(int *)(param_1 + 0x34) <= (int)uVar19) goto LAB_07457f30;
        lVar10 = *(long *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x30) = uVar19 + 1;
        if (lVar10 == 0) goto LAB_07457f7c;
        if (*(uint *)(lVar10 + 0x18) <= uVar19) goto LAB_07457f80;
        uVar19 = (uint)*(byte *)(lVar10 + (int)uVar19 + 0x20);
      }
      else {
LAB_07457a84:
        plVar20 = *(long **)(param_1 + 0x40);
        if (plVar20 == (long *)0x0) goto LAB_07457f7c;
        lVar10 = *plVar20;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == DAT_09195178) {
              puVar9 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_07457c3c;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f95da8(plVar20,DAT_09195178,0);
LAB_07457c3c:
        uVar19 = (*(code *)*puVar9)(plVar20,puVar9[1]);
        if (uVar19 == 0xffffffff) goto LAB_07457f30;
      }
    }
    else if (iVar8 == 3) {
      uVar19 = *(uint *)(param_1 + 0x30);
      if (*(int *)(param_1 + 0x34) <= (int)uVar19) goto LAB_07457f30;
      lVar10 = *(long *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x30) = uVar19 + 1;
      if (lVar10 == 0) goto LAB_07457f7c;
      if (*(uint *)(lVar10 + 0x18) <= uVar19) goto LAB_07457f80;
      uVar19 = (uint)*(ushort *)(lVar10 + (long)(int)uVar19 * 2 + 0x20);
    }
    else if (iVar8 == 4) {
      iVar8 = *(int *)(param_1 + 0x30);
      if (*(int *)(param_1 + 0x34) <= iVar8) goto LAB_07457f30;
      lVar10 = *(long *)(param_1 + 0x28);
      *(int *)(param_1 + 0x30) = iVar8 + 1;
      if (lVar10 == 0) goto LAB_07457f7c;
LAB_07457b48:
      uVar19 = System_String__get_Chars(lVar10,iVar8,0);
      uVar19 = uVar19 & 0xffff;
    }
    else {
      if (iVar8 != 5) goto LAB_07457a84;
      if (*(int *)(param_1 + 100) != 0) {
        iVar8 = *(int *)(param_1 + 0x60);
        if (iVar8 < *(int *)(param_1 + 100)) {
          lVar10 = *(long *)(param_1 + 0x68);
          *(int *)(param_1 + 0x60) = iVar8 + 1;
          if (lVar10 != 0) goto LAB_07457b48;
          goto LAB_07457f7c;
        }
        *(undefined4 *)(param_1 + 100) = 0;
      }
      iVar8 = *(int *)(param_1 + 0x30);
      if (*(int *)(param_1 + 0x34) <= iVar8) {
LAB_07457f30:
        if (param_2 != 0) {
          System_Security_Util_TokenizerStream__AddToken(param_2,0xffff);
          return;
        }
        goto LAB_07457f7c;
      }
      *(int *)(param_1 + 0x30) = iVar8 + 1;
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_07457f7c;
      uVar19 = System_String__get_Chars(*(long *)(param_1 + 0x28),iVar8,0);
      uVar19 = uVar19 & 0xffff;
      if (uVar19 == 0x7b) {
        lVar10 = *(long *)(param_1 + 0x50);
        if (lVar10 == 0) goto LAB_07457f7c;
        lVar14 = 4;
        while( true ) {
          uVar21 = (int)lVar14 - 4;
          if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar21) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar21) goto LAB_07457f80;
          lVar10 = *(long *)(lVar10 + lVar14 * 8);
          if (lVar10 == 0) goto LAB_07457f7c;
          iVar8 = System_String__Compare
                            (lVar10,0,*(undefined8 *)(param_1 + 0x28),*(int *)(param_1 + 0x30) + -1,
                             *(undefined4 *)(lVar10 + 0x10),4,0);
          if (iVar8 == 0) {
            lVar10 = *(long *)(param_1 + 0x58);
            if (lVar10 == 0) goto LAB_07457f7c;
            if (*(uint *)(lVar10 + 0x18) <= uVar21) goto LAB_07457f80;
            *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar10 + lVar14 * 8);
            thunk_FUN_03f5d7b8(param_1 + 0x68);
            lVar10 = *(long *)(param_1 + 0x68);
            if (lVar10 == 0) goto LAB_07457f7c;
            uVar2 = *(undefined4 *)(lVar10 + 0x10);
            *(undefined4 *)(param_1 + 0x60) = 1;
            *(undefined4 *)(param_1 + 100) = uVar2;
            uVar19 = System_String__get_Chars(lVar10,0,0);
            lVar10 = *(long *)(param_1 + 0x50);
            if (lVar10 == 0) goto LAB_07457f7c;
            if (*(uint *)(lVar10 + 0x18) <= uVar21) goto LAB_07457f80;
            lVar10 = *(long *)(lVar10 + lVar14 * 8);
            if (lVar10 == 0) goto LAB_07457f7c;
            uVar19 = uVar19 & 0xffff;
            *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(int *)(lVar10 + 0x10) + -1;
            break;
          }
          lVar10 = *(long *)(param_1 + 0x50);
          lVar14 = lVar14 + 1;
          if (lVar10 == 0) goto LAB_07457f7c;
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  }
  if (!bVar6) {
    if ((int)uVar19 < 0x23) {
      bVar6 = false;
      if (0x1f < (int)uVar19) goto LAB_07457970;
      if (uVar19 != 9) {
        if (uVar19 == 10) {
          bVar6 = false;
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        }
        else if (uVar19 != 0xd) goto LAB_07457b90;
      }
      goto LAB_0745782c;
    }
    if ((int)uVar19 < 0x3c) {
      if (uVar19 != 0x2d) {
        if ((uVar19 != 0x2f) || (*(int *)(param_1 + 0x14) == 0)) goto LAB_07457b90;
        if (param_2 == 0) goto LAB_07457f7c;
        System_Security_Util_TokenizerStream__AddToken(param_2,2);
        goto LAB_074577e8;
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        if (param_2 == 0) goto LAB_07457f7c;
        System_Security_Util_TokenizerStream__AddToken(param_2,7);
        goto LAB_074577e8;
      }
    }
    else if ((int)uVar19 < 0x3f) {
      if (uVar19 == 0x3c) {
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        if (param_2 == 0) goto LAB_07457f7c;
        System_Security_Util_TokenizerStream__AddToken(param_2,0);
        goto LAB_074577e8;
      }
      if (uVar19 == 0x3d) {
        if (param_2 == 0) goto LAB_07457f7c;
        System_Security_Util_TokenizerStream__AddToken(param_2,4);
        goto LAB_074577e8;
      }
      if (uVar19 == 0x3e) {
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
        if (param_2 == 0) goto LAB_07457f7c;
        System_Security_Util_TokenizerStream__AddToken(param_2,1);
        if ((param_4 & 1) != 0) {
          return;
        }
        goto LAB_074577e8;
      }
    }
    else if ((uVar19 == 0x3f) && (*(int *)(param_1 + 0x14) != 0)) {
      if (param_2 == 0) goto LAB_07457f7c;
      System_Security_Util_TokenizerStream__AddToken(param_2,5);
      goto LAB_074577e8;
    }
    goto LAB_07457b90;
  }
  if ((int)uVar19 < 0x23) {
    if ((int)uVar19 < 0xd) {
      if (uVar19 != 9) {
        if (uVar19 != 10) goto LAB_07457b90;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
    }
    else if ((uVar19 != 0xd) && (uVar19 != 0x20)) {
      if ((uVar19 != 0x22) || (!bVar7)) goto LAB_07457b90;
      goto LAB_07457e58;
    }
    if (!bVar7) goto LAB_07457e58;
  }
  else {
    if (uVar19 != 0x2f) {
      if (uVar19 != 0x3c) {
        if (0xfffffffd < uVar19 - 0x3f && !bVar7) goto LAB_074579e8;
        goto LAB_07457b90;
      }
      if (bVar7) goto LAB_07457b90;
      *(undefined4 *)(param_1 + 0x38) = 0x3c;
LAB_07457e58:
      if ((param_2 == 0) ||
         (System_Security_Util_TokenizerStream__AddToken(param_2,3), *(long *)(param_1 + 0x48) == 0)
         ) goto LAB_07457f7c;
      uVar11 = System_Security_Util_Tokenizer_StringMaker__MakeString();
      System_Security_Util_TokenizerStream__AddString(param_2,uVar11);
      goto LAB_074577e8;
    }
    if (!bVar7) {
LAB_074579e8:
      if (*(int *)(param_1 + 0x14) != 0) {
        *(uint *)(param_1 + 0x38) = uVar19;
        goto LAB_07457e58;
      }
    }
  }
LAB_07457b90:
  uVar21 = *(uint *)(lVar18 + 0x30);
  if ((int)uVar21 < 0x200) {
    lVar10 = *(long *)(lVar18 + 0x28);
    *(uint *)(lVar18 + 0x30) = uVar21 + 1;
    if (lVar10 == 0) goto LAB_07457f7c;
    if (uVar21 < *(uint *)(lVar10 + 0x18)) {
      bVar6 = true;
      *(short *)(lVar10 + (long)(int)uVar21 * 2 + 0x20) = (short)uVar19;
      goto LAB_0745782c;
    }
  }
  else {
    lVar10 = *plVar22;
    if (lVar10 == 0) {
      lVar10 = thunk_FUN_03f9944c(DAT_0918b348);
      System_Text_StringBuilder___ctor(lVar10,0);
      *plVar22 = lVar10;
      thunk_FUN_03f5d7b8(plVar22,lVar10);
      lVar10 = *plVar22;
      if (lVar10 == 0) goto LAB_07457f7c;
    }
    System_Text_StringBuilder__Append(lVar10,*(undefined8 *)(lVar18 + 0x28),0,0x200,0);
    lVar10 = *(long *)(lVar18 + 0x28);
    if (lVar10 == 0) goto LAB_07457f7c;
    if (*(int *)(lVar10 + 0x18) != 0) {
      bVar6 = true;
      *(short *)(lVar10 + 0x20) = (short)uVar19;
      *(undefined4 *)(lVar18 + 0x30) = 1;
      goto LAB_0745782c;
    }
  }
LAB_07457f80:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
LAB_07457970:
  if (uVar19 == 0x20) goto LAB_0745782c;
  if (uVar19 == 0x21) {
    if (*(int *)(param_1 + 0x14) != 0) {
      if (param_2 == 0) goto LAB_07457f7c;
      System_Security_Util_TokenizerStream__AddToken(param_2,6);
      goto LAB_074577e8;
    }
  }
  else if (uVar19 == 0x22) {
    bVar6 = true;
    bVar7 = bVar6;
    goto LAB_0745782c;
  }
  goto LAB_07457b90;
}

