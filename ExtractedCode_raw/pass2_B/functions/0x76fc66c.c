// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.JPath$$ParsePath
// address: 0x76fc66c
// body: available
// range: 0x76fc66c-0x76fccd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76fcc00 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fccbc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fccc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fccd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Newtonsoft_Json_Linq_JsonPath_JPath__ParsePath
               (long param_1,ulong param_2,int param_3,byte param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined2 uVar5;
  short sVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  long lVar12;
  ulong uVar13;
  int iVar14;
  byte bVar15;
  undefined4 uVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined2 local_64 [2];
  
  uVar10 = param_2;
  if ((DAT_09522921 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c00d8);
    FUN_03f5c2a4(&DAT_09187228);
    FUN_03f5c2a4(&DAT_091aef50);
    FUN_03f5c2a4(&DAT_091f8568);
    DAT_09522921 = 1;
    uVar10 = extraout_x1;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  local_64[0] = 0;
  if (lVar7 == 0) {
    uVar5 = 0;
LAB_076fccd0:
    local_64[0] = uVar5;
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar14 = *(int *)(param_1 + 0x20);
  iVar17 = *(int *)(lVar7 + 0x10);
  if (iVar14 < iVar17) {
    bVar15 = 0;
    bVar4 = false;
    uVar16 = 0;
    do {
      auVar18 = System_String__get_Chars(lVar7,iVar14,0);
      uVar10 = auVar18._8_8_;
      uVar5 = auVar18._0_2_;
      uVar2 = auVar18._0_4_ & 0xffff;
      uVar13 = auVar18._0_8_ & 0xffffffff;
      if (uVar2 < 0x2a) {
        if (uVar2 == 0x20) {
          if (*(long *)(param_1 + 0x10) == 0) {
            local_64[0] = 0x20;
            goto LAB_076fccc8;
          }
          bVar1 = *(int *)(param_1 + 0x20) < *(int *)(*(long *)(param_1 + 0x10) + 0x10);
        }
        else if (uVar2 == 0x28) {
LAB_076fc75c:
          iVar14 = *(int *)(param_1 + 0x20) - param_3;
          if (iVar14 == 0 || *(int *)(param_1 + 0x20) < param_3) {
            uVar11 = Newtonsoft_Json_Linq_JsonPath_JPath__ParseIndexer(param_1,uVar13,uVar16);
            if (param_2 == 0) goto LAB_076fccd0;
          }
          else {
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_076fccd0;
            uVar9 = System_String__Substring(*(long *)(param_1 + 0x10),param_3,iVar14,0);
            uVar10 = System_String__op_Equality(uVar9,DAT_091f8568,0);
            uVar11 = 0;
            if ((uVar10 & 1) == 0) {
              uVar11 = uVar9;
            }
            if (*(int *)(DAT_09187228 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar11 = Newtonsoft_Json_Linq_JsonPath_JPath__CreatePathFilter(uVar11,uVar16);
            lVar7 = DAT_091aef50;
            if (param_2 == 0) goto LAB_076fccd0;
            lVar8 = *(long *)(param_2 + 0x10);
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_076fccd0;
            uVar2 = *(uint *)(param_2 + 0x18);
            if (uVar2 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(param_2 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
              thunk_FUN_03f5d7b8();
            }
            else {
              FUN_057e0c68(param_2,uVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
            uVar11 = Newtonsoft_Json_Linq_JsonPath_JPath__ParseIndexer(param_1,uVar13,0);
          }
          lVar7 = DAT_091aef50;
          lVar8 = *(long *)(param_2 + 0x10);
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_076fccd0;
          uVar2 = *(uint *)(param_2 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(param_2 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
            thunk_FUN_03f5d7b8();
            uVar10 = extraout_x1_00;
          }
          else {
            FUN_057e0c68(param_2,uVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            uVar10 = extraout_x1_01;
          }
          bVar1 = false;
          bVar15 = 0;
          uVar16 = 0;
          bVar4 = true;
          param_3 = *(int *)(param_1 + 0x20) + 1;
          *(int *)(param_1 + 0x20) = param_3;
        }
        else {
          if (uVar2 == 0x29) goto LAB_076fc80c;
LAB_076fc814:
          if ((param_4 & 1) != 0) {
            uVar2 = auVar18._0_4_ & 0xffff;
            bVar1 = true;
            if (((uVar2 < 0x3f) && ((1L << (auVar18._0_8_ & 0x3f) & 0x7000004200000000U) != 0)) ||
               (uVar2 == 0x7c)) goto LAB_076fca54;
          }
          if (bVar4) {
            local_64[0] = uVar5;
            FUN_039afb80(DAT_09535460);
            uVar11 = System_Char__ToString(local_64,0);
            uVar9 = thunk_FUN_03fc39d4(&DAT_09211c48);
            uVar11 = System_String__Concat(uVar9,uVar11,0);
            thunk_FUN_03fc39d4(&DAT_09187348);
            uVar9 = thunk_FUN_03f9944c();
            Newtonsoft_Json_JsonException___ctor(uVar9,uVar11,0);
            uVar11 = thunk_FUN_03fc39d4(&DAT_091d1308);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar9,uVar11);
          }
          bVar1 = false;
          bVar4 = false;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        }
      }
      else {
        if (uVar2 == 0x2e) {
          iVar14 = *(int *)(param_1 + 0x20) - param_3;
          if (iVar14 == 0 || *(int *)(param_1 + 0x20) < param_3) {
LAB_076fca00:
            lVar7 = *(long *)(param_1 + 0x10);
            if (lVar7 != 0) {
              param_3 = *(int *)(param_1 + 0x20);
              uVar10 = (ulong)(param_3 + 1U);
              if ((int)(param_3 + 1U) < *(int *)(lVar7 + 0x10)) {
                sVar6 = System_String__get_Chars(lVar7,uVar10,0);
                param_3 = *(int *)(param_1 + 0x20);
                uVar10 = extraout_x1_02;
                if (sVar6 == 0x2e) {
                  param_3 = param_3 + 1;
                  uVar16 = 1;
                  *(int *)(param_1 + 0x20) = param_3;
                }
              }
              param_3 = param_3 + 1;
              bVar1 = false;
              bVar4 = false;
              *(int *)(param_1 + 0x20) = param_3;
              bVar15 = 1;
              goto LAB_076fca54;
            }
          }
          else if (*(long *)(param_1 + 0x10) != 0) {
            uVar9 = System_String__Substring(*(long *)(param_1 + 0x10),param_3,iVar14,0);
            uVar10 = System_String__op_Equality(uVar9,DAT_091f8568,0);
            uVar11 = 0;
            if ((uVar10 & 1) == 0) {
              uVar11 = uVar9;
            }
            if (*(int *)(DAT_09187228 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar11 = Newtonsoft_Json_Linq_JsonPath_JPath__CreatePathFilter(uVar11,uVar16);
            lVar7 = DAT_091aef50;
            if (param_2 != 0) {
              lVar8 = *(long *)(param_2 + 0x10);
              *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar2 = *(uint *)(param_2 + 0x18);
                if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(param_2 + 0x18) = uVar2 + 1;
                  *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
                  thunk_FUN_03f5d7b8();
                }
                else {
                  FUN_057e0c68(param_2,uVar11,
                               *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                }
                uVar16 = 0;
                goto LAB_076fca00;
              }
            }
          }
          local_64[0] = 0x2e;
          goto LAB_076fccc8;
        }
        if (uVar2 != 0x5d) {
          if (uVar2 != 0x5b) goto LAB_076fc814;
          goto LAB_076fc75c;
        }
LAB_076fc80c:
        bVar1 = true;
      }
LAB_076fca54:
      lVar7 = *(long *)(param_1 + 0x10);
      if (lVar7 == 0) goto LAB_076fccd0;
      iVar14 = *(int *)(param_1 + 0x20);
      iVar17 = *(int *)(lVar7 + 0x10);
      if (iVar17 <= iVar14) {
        bVar1 = true;
      }
    } while (!bVar1);
  }
  else {
    uVar16 = 0;
    bVar15 = 0;
    uVar5 = 0;
  }
  local_64[0] = uVar5;
  iVar3 = iVar14 - param_3;
  if (iVar3 == 0 || iVar14 < param_3) {
    if ((bVar15 & (iVar14 == iVar17 | param_4)) != 0) {
      thunk_FUN_03fc39d4(&DAT_09187348,uVar10,iVar3);
      uVar11 = thunk_FUN_03f9944c();
      uVar9 = thunk_FUN_03fc39d4(&DAT_09211d58);
      Newtonsoft_Json_JsonException___ctor(uVar11,uVar9,0);
      uVar9 = thunk_FUN_03fc39d4(&DAT_091d1308);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar11,uVar9);
    }
LAB_076fcc18:
    return iVar14 == iVar17;
  }
  lVar8 = System_String__Substring(lVar7,param_3,iVar3,0);
  lVar7 = DAT_091c00d8;
  lVar12 = *(long *)(DAT_091c00d8 + 0x38);
  if (lVar12 == 0) {
    FUN_03f95ac8(DAT_091c00d8);
    lVar12 = *(long *)(lVar7 + 0x38);
  }
  lVar12 = *(long *)(lVar12 + 0x10);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_03f95a6c();
  }
  if (*(int *)(lVar12 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  if (lVar8 != 0) {
    uVar9 = System_String__TrimEnd(lVar8,**(undefined8 **)(lVar7 + 0xb8),0);
    uVar10 = System_String__op_Equality(uVar9,DAT_091f8568,0);
    uVar11 = 0;
    if ((uVar10 & 1) == 0) {
      uVar11 = uVar9;
    }
    if (*(int *)(DAT_09187228 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar11 = Newtonsoft_Json_Linq_JsonPath_JPath__CreatePathFilter(uVar11,uVar16);
    lVar7 = DAT_091aef50;
    if (param_2 != 0) {
      lVar8 = *(long *)(param_2 + 0x10);
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar2 = *(uint *)(param_2 + 0x18);
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(param_2 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(param_2,uVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_076fcc18;
      }
    }
  }
LAB_076fccc8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

