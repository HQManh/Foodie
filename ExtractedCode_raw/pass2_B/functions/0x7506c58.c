// rea decompile_all
// name: System.Globalization.DateTimeFormatInfo$$Tokenize
// address: 0x7506c58
// body: available
// range: 0x7506c58-0x75071db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7506fbc to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75071d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75071d8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Globalization_DateTimeFormatInfo__Tokenize
               (long param_1,uint param_2,uint *param_3,undefined4 *param_4,long *param_5)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  uint uVar20;
  int iVar21;
  undefined4 local_68;
  char local_64 [4];
  
  if ((DAT_095216a8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183570);
    FUN_03f5c2a4(&DAT_09184c68);
    FUN_03f5c2a4(&DAT_091b97e8);
    FUN_03f5c2a4(&DAT_0918db18);
    DAT_095216a8 = 1;
  }
  *param_3 = 0xb;
  uVar1 = *(ushort *)((long)param_5 + 0x14);
  uVar8 = (uint)uVar1;
  *param_4 = 0;
  local_64[0] = '\0';
  local_68 = 0;
  if (*(int *)(DAT_09535460 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = System_Char__IsLetter(uVar1,0);
  if ((uVar7 & 1) != 0) {
    plVar12 = (long *)System_Globalization_DateTimeFormatInfo__get_Culture(param_1);
    if ((plVar12 == (long *)0x0) ||
       (plVar12 = (long *)(**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0))
       , plVar12 == (long *)0x0)) goto LAB_075071d4;
    uVar8 = (**(code **)(*plVar12 + 0x1a8))(plVar12,uVar1,*(undefined8 *)(*plVar12 + 0x1b0));
    if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184c68);
    }
    if (DAT_095216cd == '\0') {
      FUN_03f5c2a4(&DAT_09184c68);
      DAT_095216cd = '\x01';
    }
    if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(char **)(DAT_09184c68 + 0xb8) == '\0') {
      if (*(int *)(DAT_09183570 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((param_2 == 0xff) && ((uVar8 - 0x590 & 0xffff) < 0x70)) {
        if (*(int *)(DAT_09183570 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar13 = System_Globalization_DateTimeFormatInfo__TryParseHebrewNumber
                           (param_5,local_64,param_4);
        if ((uVar13 & 1) != 0) {
          if (local_64[0] == '\0') {
            uVar8 = 0xc;
          }
          else {
            uVar8 = 0xb;
          }
          *param_3 = uVar8;
          return local_64[0] == '\0';
        }
      }
    }
  }
  if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar9 = System___DTString__get_Length(param_5,0);
  lVar15 = param_5[2];
  lVar18 = *(long *)(param_1 + 0x158);
  if ((lVar18 != 0) ||
     (lVar18 = System_Globalization_DateTimeFormatInfo__CreateTokenHashTable(param_1), lVar18 != 0))
  {
    iVar21 = 199;
    uVar20 = uVar8 + ((uVar8 & 0xffff) / 199) * -199 & 0xffff;
    do {
      if (*(uint *)(lVar18 + 0x18) <= uVar20) goto LAB_075071d8;
      lVar17 = *(long *)(lVar18 + (long)(int)uVar20 * 8 + 0x20);
      if (lVar17 == 0) {
        return false;
      }
      if (0 < (int)(*(uint *)(lVar17 + 0x18) & param_2)) {
        if (*(long *)(lVar17 + 0x10) == 0) break;
        iVar10 = *(int *)(*(long *)(lVar17 + 0x10) + 0x10);
        if (iVar10 <= iVar9 - (int)lVar15) {
          if ((uVar7 & 1) == 0) {
LAB_07506f28:
            lVar14 = *(long *)(lVar17 + 0x10);
            if (lVar14 != 0) {
              if (*(int *)(lVar14 + 0x10) == 1) {
                if (*(uint *)(param_5 + 1) <= *(uint *)(param_5 + 2)) {
LAB_075071d8:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                sVar3 = *(short *)(*param_5 + (long)(int)*(uint *)(param_5 + 2) * 2);
                sVar6 = System_String__get_Chars(lVar14,0,0);
                if (sVar3 != sVar6) goto LAB_07506f68;
              }
              else {
LAB_07506f68:
                plVar12 = (long *)System_Globalization_DateTimeFormatInfo__get_Culture(param_1);
                if (plVar12 == (long *)0x0) break;
                lVar14 = (**(code **)(*plVar12 + 0x208))(plVar12,*(undefined8 *)(*plVar12 + 0x210));
                if (*(long *)(lVar17 + 0x10) == 0) break;
                uVar11 = *(uint *)(*(long *)(lVar17 + 0x10) + 0x10);
                uVar4 = *(uint *)(param_5 + 2);
                if ((*(uint *)(param_5 + 1) < uVar4) || (*(uint *)(param_5 + 1) - uVar4 < uVar11)) {
                    /* WARNING: Subroutine does not return */
                  System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
                }
                lVar16 = *param_5;
                if ((*(ushort *)(*(long *)(DAT_091b97e8 + 0x20) + 0x135) & 1) == 0) {
                  FUN_03f95a6c();
                }
                if (lVar14 == 0) break;
                iVar10 = System_Globalization_CompareInfo__Compare
                                   (lVar14,lVar16 + (long)(int)uVar4 * 2,uVar11,
                                    *(undefined8 *)(lVar17 + 0x10),1);
                if (iVar10 != 0) goto LAB_07506ffc;
              }
              *param_3 = *(uint *)(lVar17 + 0x18) & param_2;
              lVar15 = *(long *)(lVar17 + 0x10);
              *param_4 = *(undefined4 *)(lVar17 + 0x1c);
              if (lVar15 != 0) {
                iVar9 = *(int *)(DAT_0918db18 + 0xe4);
                uVar5 = *(undefined4 *)(lVar15 + 0x10);
                goto joined_r0x0750716c;
              }
            }
            break;
          }
          lVar14 = param_5[2];
          if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar11 = (int)lVar14 + iVar10;
          iVar10 = System___DTString__get_Length(param_5,0);
          if ((int)uVar11 <= iVar10) {
            if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar10 = System___DTString__get_Length(param_5,0);
            if ((int)uVar11 < iVar10) {
              if (*(uint *)(param_5 + 1) <= uVar11) goto LAB_075071d8;
              uVar2 = *(undefined2 *)(*param_5 + (long)(int)uVar11 * 2);
              if (*(int *)(DAT_09535460 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar13 = System_Char__IsLetter(uVar2,0);
              if (((uVar13 & 1) != 0) &&
                 (uVar13 = FUN_0750d2bc(param_1,*(undefined8 *)(lVar17 + 0x10),uVar2,0),
                 (uVar13 & 1) == 0)) goto LAB_07506ffc;
            }
            goto LAB_07506f28;
          }
LAB_07506ffc:
          iVar10 = *(int *)(lVar17 + 0x18);
          if (iVar10 == 5) {
            uVar11 = *(uint *)(param_1 + 0x144);
            if (uVar11 == 0xffffffff) {
              uVar11 = System_Globalization_DateTimeFormatInfo__InitializeFormatFlags(param_1);
            }
            if ((uVar11 >> 2 & 1) == 0) {
              iVar10 = *(int *)(lVar17 + 0x18);
              goto LAB_07507030;
            }
LAB_0750705c:
            uVar19 = *(undefined8 *)(lVar17 + 0x10);
            local_68 = 0;
            if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar13 = System___DTString__MatchSpecifiedWords(param_5,uVar19,1,&local_68,0);
            if ((uVar13 & 1) != 0) {
              *param_3 = *(uint *)(lVar17 + 0x18) & param_2;
              lVar15 = DAT_0918db18;
              *param_4 = *(undefined4 *)(lVar17 + 0x1c);
              iVar9 = *(int *)(lVar15 + 0xe4);
              uVar5 = local_68;
joined_r0x0750716c:
              if (iVar9 == 0) {
                FUN_03f5c424();
              }
              System___DTString__Advance(param_5,uVar5,0);
              return true;
            }
          }
          else {
LAB_07507030:
            if (iVar10 == 7) {
              uVar11 = *(uint *)(param_1 + 0x144);
              if (uVar11 == 0xffffffff) {
                uVar11 = System_Globalization_DateTimeFormatInfo__InitializeFormatFlags(param_1);
              }
              if ((uVar11 >> 4 & 1) != 0) goto LAB_0750705c;
            }
          }
        }
      }
      uVar20 = uVar20 + (uVar8 + ((uVar8 & 0xffff) / 0xc5) * -0xc5 + 1 & 0xffff);
      if (0xc6 < (int)uVar20) {
        uVar20 = uVar20 - 199;
      }
      iVar21 = iVar21 + -1;
      if (iVar21 == 0) {
        return false;
      }
    } while( true );
  }
LAB_075071d4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

