// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.JPath$$ParseExpression
// address: 0x76fdbfc
// body: available
// range: 0x76fdbfc-0x76fe0eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76fe000 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fe0e8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Linq_JsonPath_JPath__ParseExpression(long param_1)

{
  uint uVar1;
  long lVar2;
  short sVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  if ((DAT_09522929 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181e50);
    FUN_03f5c2a4(&DAT_09182898);
    FUN_03f5c2a4(&DAT_091af468);
    FUN_03f5c2a4(&DAT_091f72d0);
    FUN_03f5c2a4(&DAT_09226a90);
    DAT_09522929 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      if (*(int *)(lVar8 + 0x10) <= *(int *)(param_1 + 0x20)) {
        thunk_FUN_03fc39d4(&DAT_09187348);
        uVar13 = thunk_FUN_03f9944c();
        uVar5 = thunk_FUN_03fc39d4(&DAT_0920a618);
        Newtonsoft_Json_JsonException___ctor(uVar13,uVar5,0);
        goto LAB_076fe0d4;
      }
      uVar5 = Newtonsoft_Json_Linq_JsonPath_JPath__ParseSide(param_1);
      if (*(long *)(param_1 + 0x10) == 0) break;
      sVar3 = System_String__get_Chars(*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),0);
      if (sVar3 == 0x29) {
LAB_076fdd18:
        uVar13 = 0;
        uVar4 = 3;
      }
      else {
        if (*(long *)(param_1 + 0x10) == 0) break;
        sVar3 = System_String__get_Chars
                          (*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),0);
        if (sVar3 == 0x7c) goto LAB_076fdd18;
        if (*(long *)(param_1 + 0x10) == 0) break;
        sVar3 = System_String__get_Chars
                          (*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),0);
        if (sVar3 == 0x26) goto LAB_076fdd18;
        uVar4 = Newtonsoft_Json_Linq_JsonPath_JPath__ParseOperator(param_1);
        uVar13 = Newtonsoft_Json_Linq_JsonPath_JPath__ParseSide(param_1);
      }
      lVar8 = thunk_FUN_03f9944c(DAT_09181e50);
      Newtonsoft_Json_Linq_JsonPath_BooleanQueryExpression___ctor(lVar8,uVar4,uVar5,uVar13);
      if (*(long *)(param_1 + 0x10) == 0) break;
      sVar3 = System_String__get_Chars(*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),0);
      lVar2 = DAT_091af468;
      if (sVar3 == 0x29) {
        if (lVar12 != 0) {
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 == 0) break;
          lVar7 = *(long *)(lVar12 + 0x10);
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar7 == 0) break;
          uVar1 = *(uint *)(lVar12 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar1 + 1;
            plVar10 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *plVar10 = lVar8;
            thunk_FUN_03f5d7b8(plVar10,lVar8);
            lVar8 = lVar11;
          }
          else {
            FUN_057e0c68(lVar12,lVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            lVar8 = lVar11;
          }
        }
        return lVar8;
      }
      if (*(long *)(param_1 + 0x10) == 0) break;
      sVar3 = System_String__get_Chars(*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),0);
      if (sVar3 == 0x26) {
        uVar6 = Newtonsoft_Json_Linq_JsonPath_JPath__Match(param_1,DAT_091f72d0);
        if ((uVar6 & 1) == 0) {
LAB_076fe0c8:
          uVar13 = Newtonsoft_Json_Linq_JsonPath_JPath__CreateUnexpectedCharacterException(param_1);
LAB_076fe0d4:
          uVar5 = thunk_FUN_03fc39d4(&DAT_091d12f0);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar13,uVar5);
        }
        if ((lVar12 == 0) || (*(int *)(lVar12 + 0x10) != 8)) {
          lVar7 = thunk_FUN_03f9944c(DAT_09182898);
          Newtonsoft_Json_Linq_JsonPath_CompositeExpression___ctor(lVar7,8);
          lVar2 = DAT_091af468;
          if (lVar12 != 0) {
            lVar12 = *(long *)(lVar12 + 0x18);
            if (lVar12 == 0) break;
            lVar9 = *(long *)(lVar12 + 0x10);
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar9 == 0) break;
            uVar1 = *(uint *)(lVar12 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
              plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
              *plVar10 = lVar7;
              thunk_FUN_03f5d7b8(plVar10,lVar7);
            }
            else {
              FUN_057e0c68(lVar12,lVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar12 = lVar7;
          if (lVar11 != 0) {
            lVar12 = lVar11;
          }
          lVar11 = lVar12;
          lVar12 = lVar7;
          if (lVar7 == 0) break;
        }
        lVar2 = DAT_091af468;
        lVar7 = *(long *)(lVar12 + 0x18);
        if (lVar7 != 0) {
          lVar9 = *(long *)(lVar7 + 0x10);
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
              *plVar10 = lVar8;
              thunk_FUN_03f5d7b8(plVar10,lVar8);
            }
            else {
              FUN_057e0c68(lVar7,lVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_076fdebc;
          }
        }
        break;
      }
LAB_076fdebc:
      if (*(long *)(param_1 + 0x10) == 0) break;
      sVar3 = System_String__get_Chars(*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),0);
      if (sVar3 == 0x7c) {
        uVar6 = Newtonsoft_Json_Linq_JsonPath_JPath__Match(param_1,DAT_09226a90);
        if ((uVar6 & 1) == 0) goto LAB_076fe0c8;
        if ((lVar12 == 0) || (*(int *)(lVar12 + 0x10) != 9)) {
          lVar7 = thunk_FUN_03f9944c(DAT_09182898);
          Newtonsoft_Json_Linq_JsonPath_CompositeExpression___ctor(lVar7,9);
          lVar2 = DAT_091af468;
          if (lVar12 != 0) {
            lVar12 = *(long *)(lVar12 + 0x18);
            if (lVar12 == 0) break;
            lVar9 = *(long *)(lVar12 + 0x10);
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar9 == 0) break;
            uVar1 = *(uint *)(lVar12 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
              plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
              *plVar10 = lVar7;
              thunk_FUN_03f5d7b8(plVar10,lVar7);
            }
            else {
              FUN_057e0c68(lVar12,lVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar12 = lVar7;
          if (lVar11 != 0) {
            lVar12 = lVar11;
          }
          lVar11 = lVar12;
          lVar12 = lVar7;
          if (lVar7 == 0) break;
        }
        lVar2 = DAT_091af468;
        lVar7 = *(long *)(lVar12 + 0x18);
        if (lVar7 == 0) break;
        lVar9 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar9 == 0) break;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
          *plVar10 = lVar8;
          thunk_FUN_03f5d7b8(plVar10,lVar8);
        }
        else {
          FUN_057e0c68(lVar7,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      lVar8 = *(long *)(param_1 + 0x10);
    } while (lVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

