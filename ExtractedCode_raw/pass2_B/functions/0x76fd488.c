// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.JPath$$ParseArrayIndexer
// address: 0x76fd488
// body: available
// range: 0x76fd488-0x76fdbfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76fdb24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fdb6c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fdbd8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Linq_JsonPath_JPath__ParseArrayIndexer(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  undefined8 local_90;
  short local_84 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulong local_68;
  
  if ((DAT_09522924 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181578);
    FUN_03f5c2a4(&DAT_09181598);
    FUN_03f5c2a4(&DAT_091815b0);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_091b6fa0);
    FUN_03f5c2a4(&DAT_091b6f98);
    FUN_03f5c2a4(&DAT_091b6fb8);
    FUN_03f5c2a4(&DAT_0920a610);
    DAT_09522924 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  local_84[0] = 0;
  if (lVar5 != 0) {
    iVar13 = *(int *)(param_1 + 0x20);
    lVar12 = 0;
    iVar14 = 0;
    do {
      while( true ) {
        if (*(int *)(lVar5 + 0x10) <= *(int *)(param_1 + 0x20)) {
          thunk_FUN_03fc39d4(&DAT_09187348);
          uVar7 = thunk_FUN_03f9944c();
          puVar9 = &DAT_0920a610;
          goto LAB_076fdb44;
        }
        uVar3 = System_String__get_Chars(lVar5,*(int *)(param_1 + 0x20),0);
        uVar7 = DAT_0920a610;
        local_84[0] = (short)uVar3;
        if ((uVar3 & 0xffff) != 0x20) break;
        FUN_05c3078c(&local_68,*(undefined4 *)(param_1 + 0x20),DAT_091b6f98);
        Newtonsoft_Json_Linq_JsonPath_JPath__EatWhitespace(param_1);
LAB_076fd644:
        lVar5 = *(long *)(param_1 + 0x10);
        if (lVar5 == 0) goto LAB_076fdb24;
      }
      iVar10 = (int)(local_68 >> 0x20);
      if ((uVar3 & 0xffff) == (param_2 & 0xffff)) {
        if ((local_68 & 0xff) == 0) {
          iVar10 = *(int *)(param_1 + 0x20);
        }
        iVar2 = iVar10 - iVar13;
        if (lVar12 == 0) {
          if (0 < iVar14) {
            if (0 < iVar2) {
              if (*(long *)(param_1 + 0x10) == 0) break;
              uVar7 = System_String__Substring(*(long *)(param_1 + 0x10),iVar13,iVar2,0);
              if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09182ff8);
              }
              uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
              if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09182b88);
              }
              uVar4 = System_Convert__ToInt32(uVar7,uVar8,0);
              puVar9 = &local_78;
              if (iVar14 != 1) {
                puVar9 = &local_80;
              }
              FUN_05c3078c(puVar9,uVar4,DAT_091b6f98);
            }
            lVar5 = thunk_FUN_03f9944c(DAT_091815b0);
            System_Object___ctor(lVar5,0);
            if (lVar5 != 0) {
              *(undefined8 *)(lVar5 + 0x20) = local_80;
              *(undefined8 *)(lVar5 + 0x10) = local_70;
              *(undefined8 *)(lVar5 + 0x18) = local_78;
              return lVar5;
            }
            break;
          }
          if (iVar10 != iVar13) {
            if (*(long *)(param_1 + 0x10) != 0) {
              uVar7 = System_String__Substring(*(long *)(param_1 + 0x10),iVar13,iVar2,0);
              if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09182ff8);
              }
              uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
              if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09182b88);
              }
              uVar4 = System_Convert__ToInt32(uVar7,uVar8,0);
              lVar5 = thunk_FUN_03f9944c(DAT_09181578);
              System_Object___ctor(lVar5,0);
              local_90 = 0;
              FUN_05c3078c(&local_90,uVar4,DAT_091b6f98);
              if (lVar5 != 0) {
                *(undefined8 *)(lVar5 + 0x10) = local_90;
                return lVar5;
              }
            }
            break;
          }
        }
        else if (iVar2 != 0) {
          if (*(long *)(param_1 + 0x10) != 0) {
            uVar7 = System_String__Substring(*(long *)(param_1 + 0x10),iVar13,iVar2,0);
            if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09182ff8);
            }
            uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09182b88);
            }
            uVar4 = System_Convert__ToInt32(uVar7,uVar8,0);
            lVar5 = DAT_091adc88;
            lVar11 = *(long *)(lVar12 + 0x10);
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar11 != 0) {
              uVar3 = *(uint *)(lVar12 + 0x18);
              if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar3 + 1;
                *(undefined4 *)(lVar11 + (long)(int)uVar3 * 4 + 0x20) = uVar4;
              }
              else {
                FUN_057971a8(lVar12,uVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              lVar5 = thunk_FUN_03f9944c(DAT_09181598);
              System_Object___ctor(lVar5,0);
              *(long *)(lVar5 + 0x10) = lVar12;
              thunk_FUN_03f5d7b8((long *)(lVar5 + 0x10),lVar12);
              return lVar5;
            }
          }
          break;
        }
LAB_076fdbdc:
        thunk_FUN_03fc39d4(&DAT_09187348);
        uVar7 = thunk_FUN_03f9944c();
        puVar9 = (undefined8 *)&DAT_091fbee0;
LAB_076fdb44:
        uVar8 = thunk_FUN_03fc39d4(puVar9);
        Newtonsoft_Json_JsonException___ctor(uVar7,uVar8,0);
        uVar8 = thunk_FUN_03fc39d4(&DAT_091d12e8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar7,uVar8);
      }
      uVar1 = uVar3 & 0xffff;
      if (uVar1 == 0x2a) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        Newtonsoft_Json_Linq_JsonPath_JPath__EnsureLength(param_1,uVar7);
        Newtonsoft_Json_Linq_JsonPath_JPath__EatWhitespace(param_1);
        if (*(long *)(param_1 + 0x10) != 0) {
          uVar3 = System_String__get_Chars
                            (*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),0);
          if ((uVar3 & 0xffff) == (param_2 & 0xffff)) {
            lVar5 = thunk_FUN_03f9944c(DAT_09181578);
            System_Object___ctor(lVar5,0);
            return lVar5;
          }
LAB_076fdb70:
          FUN_039afb80(DAT_09535460);
          uVar7 = System_Char__ToString(local_84,0);
          uVar8 = thunk_FUN_03fc39d4(&DAT_09211c58);
          uVar7 = System_String__Concat(uVar8,uVar7,0);
          thunk_FUN_03fc39d4(&DAT_09187348);
          uVar8 = thunk_FUN_03f9944c();
          Newtonsoft_Json_JsonException___ctor(uVar8,uVar7,0);
          uVar7 = thunk_FUN_03fc39d4(&DAT_091d12e8);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar8,uVar7);
        }
        break;
      }
      if (uVar1 == 0x3a) {
        if ((local_68 & 0xff) == 0) {
          iVar10 = *(int *)(param_1 + 0x20);
        }
        if (0 < iVar10 - iVar13) {
          if (*(long *)(param_1 + 0x10) == 0) break;
          uVar7 = System_String__Substring(*(long *)(param_1 + 0x10),iVar13,iVar10 - iVar13,0);
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09182ff8);
          }
          uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09182b88);
          }
          uVar4 = System_Convert__ToInt32(uVar7,uVar8,0);
          if (iVar14 == 0) {
            puVar9 = &local_70;
          }
          else if (iVar14 == 1) {
            puVar9 = &local_78;
          }
          else {
            puVar9 = &local_80;
          }
          FUN_05c3078c(puVar9,uVar4,DAT_091b6f98);
        }
        iVar13 = *(int *)(param_1 + 0x20);
        iVar14 = iVar14 + 1;
      }
      else {
        if (uVar1 != 0x2c) {
          if (*(int *)(DAT_09535460 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = System_Char__IsDigit(uVar3,0);
          if ((((uVar6 & 1) == 0) && (local_84[0] != 0x2d)) || ((char)local_68 != '\0'))
          goto LAB_076fdb70;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          goto LAB_076fd644;
        }
        if ((local_68 & 0xff) == 0) {
          iVar10 = *(int *)(param_1 + 0x20);
        }
        if (iVar10 - iVar13 == 0) goto LAB_076fdbdc;
        if (lVar12 == 0) {
          lVar12 = thunk_FUN_03f9944c(DAT_0917c520);
          FUN_05796918(lVar12,DAT_091adc70);
        }
        if (*(long *)(param_1 + 0x10) == 0) break;
        uVar7 = System_String__Substring(*(long *)(param_1 + 0x10),iVar13,iVar10 - iVar13,0);
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182ff8);
        }
        uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182b88);
        }
        uVar4 = System_Convert__ToInt32(uVar7,uVar8,0);
        lVar5 = DAT_091adc88;
        if (lVar12 == 0) break;
        lVar11 = *(long *)(lVar12 + 0x10);
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar11 == 0) break;
        uVar3 = *(uint *)(lVar12 + 0x18);
        if (uVar3 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar3 + 1;
          *(undefined4 *)(lVar11 + (long)(int)uVar3 * 4 + 0x20) = uVar4;
        }
        else {
          FUN_057971a8(lVar12,uVar4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        iVar13 = *(int *)(param_1 + 0x20);
      }
      *(int *)(param_1 + 0x20) = iVar13 + 1;
      Newtonsoft_Json_Linq_JsonPath_JPath__EatWhitespace(param_1);
      lVar5 = *(long *)(param_1 + 0x10);
      iVar13 = *(int *)(param_1 + 0x20);
      local_68 = 0;
    } while (lVar5 != 0);
  }
LAB_076fdb24:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

