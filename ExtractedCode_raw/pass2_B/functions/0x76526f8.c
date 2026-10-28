// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader$$ReadStringValue
// address: 0x76526f8
// body: available
// range: 0x76526f8-0x7652bfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7652914 to 0x7653898 Newtonsoft.Json.JsonTextReader$$ParseNumberPositiveInfinity (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7652980 to 0x7653918 Newtonsoft.Json.JsonTextReader$$ParseNumberNaN (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7652ab0 to 0x76534b8 Newtonsoft.Json.JsonTextReader$$FinishReadQuotedStringValue (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7652b18 to 0x765370c Newtonsoft.Json.JsonTextReader$$ParseNumberNegativeInfinity (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7652b28 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7652b2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7652b5c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_JsonTextReader__ReadStringValue(long *param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  undefined4 local_24;
  
  if ((DAT_095223af & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187300);
    DAT_095223af = 1;
  }
  Newtonsoft_Json_JsonTextReader__EnsureBuffer(param_1);
  uVar1 = *(uint *)((long)param_1 + 0x24);
  if (0xc < uVar1) {
LAB_07652b88:
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    local_24 = *(undefined4 *)((long)param_1 + 0x24);
    uVar8 = thunk_FUN_03fc39d4(&DAT_09191fb8);
    uVar8 = FUN_03f5c42c(uVar8,&local_24);
    uVar9 = thunk_FUN_03fc39d4(&DAT_09211e30);
    uVar7 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar9,uVar7,uVar8,0);
    uVar7 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar7);
LAB_07652b44:
    uVar8 = thunk_FUN_03fc39d4(&DAT_091d1cc8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar8);
  }
  if ((1 << (ulong)(uVar1 & 0x1f) & 0x665U) == 0) {
    if (uVar1 == 8) {
      uVar6 = Newtonsoft_Json_JsonTextReader__ParsePostValue(param_1,1);
      if ((uVar6 & 1) == 0) goto LAB_07652754;
    }
    else {
      if (uVar1 != 0xc) goto LAB_07652b88;
      Newtonsoft_Json_JsonTextReader__ReadFinished(param_1);
    }
    return 0;
  }
LAB_07652754:
  lVar11 = param_1[0x10];
  lVar4 = DAT_09535460;
  do {
    DAT_09535460 = lVar4;
    if (lVar11 == 0) {
LAB_07652b2c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(uint *)((long)param_1 + 0x8c);
    if (*(uint *)(lVar11 + 0x18) <= uVar1) {
LAB_07652b28:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar2 = *(ushort *)(lVar11 + (long)(int)uVar1 * 2 + 0x20);
    uVar5 = (uint)uVar2;
    uVar12 = (uint)uVar2;
    if (0x49 < uVar2) {
      if (uVar12 < 0x5e) {
        if (uVar2 == 0x4e) {
          uVar7 = Newtonsoft_Json_JsonTextReader__ParseNumberNaN(param_1,param_2);
          return uVar7;
        }
        if (uVar2 != 0x5d) goto LAB_07652834;
        *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
        if ((*(int *)((long)param_1 + 0x24) - 5U < 2) || (*(int *)((long)param_1 + 0x24) == 8)) {
          *(undefined4 *)(param_1 + 2) = 0xe;
          param_1[3] = 0;
          thunk_FUN_03f5d7b8(param_1 + 3,0);
          Newtonsoft_Json_JsonReader__ValidateEnd(param_1,0xe);
          return 0;
        }
        uVar5 = 0x5d;
      }
      else {
        if (uVar12 != 0x66) {
          if (uVar12 == 0x6e) {
            Newtonsoft_Json_JsonTextReader__HandleNull(param_1);
            return 0;
          }
          if (uVar12 != 0x74) goto LAB_07652834;
        }
        if (param_2 == 4) {
          if (uVar12 == 0x74) {
            if (*(int *)(DAT_09187300 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar10 = (undefined8 *)(*(long *)(DAT_09187300 + 0xb8) + 8);
          }
          else {
            if (*(int *)(DAT_09187300 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar10 = (undefined8 *)(*(long *)(DAT_09187300 + 0xb8) + 0x10);
          }
          uVar7 = *puVar10;
          uVar6 = Newtonsoft_Json_JsonTextReader__MatchValueWithTrailingSeparator(param_1,uVar7);
          if ((uVar6 & 1) != 0) {
            Newtonsoft_Json_JsonReader__SetToken(param_1,9,uVar7,1);
            return uVar7;
          }
          lVar11 = param_1[0x10];
          iVar3 = *(int *)((long)param_1 + 0x8c);
          FUN_039b1d98(lVar11);
          uVar5 = FUN_03ebadd8(lVar11,(long)iVar3);
        }
        else {
LAB_07652b30:
          *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
        }
      }
LAB_07652b40:
      uVar7 = Newtonsoft_Json_JsonTextReader__CreateUnexpectedCharacterException(param_1,uVar5);
      goto LAB_07652b44;
    }
    if (uVar2 < 0xe) {
      if (uVar2 == 0) {
        uVar6 = Newtonsoft_Json_JsonTextReader__ReadNullChar(param_1);
        if ((uVar6 & 1) != 0) {
          param_1[3] = 0;
          *(undefined4 *)(param_1 + 2) = 0;
          thunk_FUN_03f5d7b8(param_1 + 3,0);
          return 0;
        }
      }
      else if (uVar2 == 9) {
LAB_07652894:
        *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
      }
      else if (uVar2 == 10) {
        *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
        *(uint *)(param_1 + 0x12) = uVar1 + 1;
        *(int *)((long)param_1 + 0x94) = *(int *)((long)param_1 + 0x94) + 1;
      }
      else {
        if (uVar2 != 0xd) goto LAB_07652834;
        Newtonsoft_Json_JsonTextReader__ProcessCarriageReturn(param_1,0);
      }
      goto LAB_0765285c;
    }
    if (uVar2 < 0x28) {
      if (uVar2 < 0x23) {
        if (uVar2 == 0x20) goto LAB_07652894;
        if (uVar2 != 0x21) {
          if (uVar12 == 0x22) goto LAB_07652a8c;
          goto LAB_076528f8;
        }
      }
      else if (3 < uVar12 - 0x23) {
        if (uVar12 == 0x27) {
LAB_07652a8c:
          Newtonsoft_Json_JsonTextReader__ParseString(param_1,uVar12,param_2);
          uVar7 = Newtonsoft_Json_JsonTextReader__FinishReadQuotedStringValue(param_1,param_2);
          return uVar7;
        }
LAB_076528f8:
        if (uVar5 == 0x49) {
          uVar7 = Newtonsoft_Json_JsonTextReader__ParseNumberPositiveInfinity(param_1,param_2);
          return uVar7;
        }
      }
LAB_07652834:
      *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_Char__IsWhiteSpace(uVar5,0);
      if ((uVar6 & 1) == 0) goto LAB_07652b40;
    }
    else {
      if (uVar2 < 0x2c) goto LAB_07652834;
      if (uVar2 < 0x2f) {
        if (uVar2 != 0x2c) {
          if (uVar2 != 0x2d) {
            if (uVar12 != 0x2e) goto LAB_076528f8;
            goto LAB_07652a2c;
          }
          if ((int)param_1[0x11] <= (int)(uVar1 + 1)) {
            uVar6 = Newtonsoft_Json_JsonTextReader__ReadChars(param_1,1,1);
            if ((uVar6 & 1) == 0) goto LAB_07652a3c;
            lVar11 = param_1[0x10];
            if (lVar11 == 0) goto LAB_07652b2c;
          }
          uVar1 = *(int *)((long)param_1 + 0x8c) + 1;
          if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_07652b28;
          if (*(short *)(lVar11 + (long)(int)uVar1 * 2 + 0x20) == 0x49) {
            uVar7 = Newtonsoft_Json_JsonTextReader__ParseNumberNegativeInfinity(param_1,param_2);
            return uVar7;
          }
          goto LAB_07652a3c;
        }
        Newtonsoft_Json_JsonTextReader__ProcessValueComma(param_1);
      }
      else {
        if (uVar12 != 0x2f) {
          if (9 < uVar5 - 0x30) goto LAB_076528f8;
LAB_07652a2c:
          if (param_2 == 4) {
            param_2 = 4;
LAB_07652a3c:
            Newtonsoft_Json_JsonTextReader__ParseNumber(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x07652a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar7 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
            return uVar7;
          }
          goto LAB_07652b30;
        }
        Newtonsoft_Json_JsonTextReader__ParseComment(param_1,0);
      }
    }
LAB_0765285c:
    lVar11 = param_1[0x10];
    lVar4 = DAT_09535460;
  } while( true );
}

