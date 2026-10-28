// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader$$ReadNumberValue
// address: 0x7652248
// body: available
// range: 0x7652248-0x7652633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x765241c to 0x7653f40 Newtonsoft.Json.JsonTextReader$$FinishReadQuotedNumber (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76524b8 to 0x7653898 Newtonsoft.Json.JsonTextReader$$ParseNumberPositiveInfinity (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76524d0 to 0x7653918 Newtonsoft.Json.JsonTextReader$$ParseNumberNaN (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7652560 to 0x765370c Newtonsoft.Json.JsonTextReader$$ParseNumberNegativeInfinity (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7652590 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7652594 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76525bc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_JsonTextReader__ReadNumberValue(long *param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  long lVar8;
  uint uVar9;
  undefined4 local_24;
  
  Newtonsoft_Json_JsonTextReader__EnsureBuffer();
  uVar1 = *(uint *)((long)param_1 + 0x24);
  if (0xc < uVar1) {
LAB_076525c0:
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    local_24 = *(undefined4 *)((long)param_1 + 0x24);
    uVar5 = thunk_FUN_03fc39d4(&DAT_09191fb8);
    uVar5 = FUN_03f5c42c(uVar5,&local_24);
    uVar6 = thunk_FUN_03fc39d4(&DAT_09211e30);
    uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar6,uVar4,uVar5,0);
    uVar4 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar4);
LAB_076525a4:
    uVar5 = thunk_FUN_03fc39d4(&DAT_091d1cb8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar5);
  }
  if ((1 << (ulong)(uVar1 & 0x1f) & 0x665U) == 0) {
    if (uVar1 != 8) {
      if (uVar1 == 0xc) {
        Newtonsoft_Json_JsonTextReader__ReadFinished(param_1);
        return 0;
      }
      goto LAB_076525c0;
    }
    uVar3 = Newtonsoft_Json_JsonTextReader__ParsePostValue(param_1,1);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
  }
  lVar8 = param_1[0x10];
  lVar2 = DAT_09535460;
joined_r0x07652284:
  DAT_09535460 = lVar2;
  if (lVar8 == 0) {
LAB_07652594:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(uint *)((long)param_1 + 0x8c);
  if (*(uint *)(lVar8 + 0x18) <= uVar1) {
LAB_07652590:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  uVar7 = *(ushort *)(lVar8 + (long)(int)uVar1 * 2 + 0x20);
  uVar9 = (uint)uVar7;
  if (uVar7 < 0x3a) {
    if (uVar9 == 0) {
      uVar3 = Newtonsoft_Json_JsonTextReader__ReadNullChar(param_1);
      if ((uVar3 & 1) != 0) {
        param_1[3] = 0;
        *(undefined4 *)(param_1 + 2) = 0;
        thunk_FUN_03f5d7b8(param_1 + 3,0);
        return 0;
      }
LAB_076523c0:
      lVar8 = param_1[0x10];
      lVar2 = DAT_09535460;
      goto joined_r0x07652284;
    }
    if (uVar7 < 0x20) {
      if (uVar9 == 9) {
LAB_07652370:
        *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
      }
      else if (uVar9 == 10) {
        *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
        *(uint *)(param_1 + 0x12) = uVar1 + 1;
        *(int *)((long)param_1 + 0x94) = *(int *)((long)param_1 + 0x94) + 1;
      }
      else {
        if (uVar9 != 0xd) goto LAB_0765230c;
        Newtonsoft_Json_JsonTextReader__ProcessCarriageReturn(param_1,0);
      }
      goto LAB_076523c0;
    }
    if (uVar7 < 0x2d) {
      if (uVar9 == 0x26 || uVar7 < 0x26) {
        if (uVar9 == 0x20) goto LAB_07652370;
        if (uVar9 == 0x22) {
LAB_076523f8:
          Newtonsoft_Json_JsonTextReader__ParseString(param_1,uVar7,param_2);
          uVar4 = Newtonsoft_Json_JsonTextReader__FinishReadQuotedNumber(param_1,param_2);
          return uVar4;
        }
      }
      else {
        if (uVar9 == 0x2c) {
          Newtonsoft_Json_JsonTextReader__ProcessValueComma(param_1);
          goto LAB_076523c0;
        }
        if (uVar9 == 0x27) goto LAB_076523f8;
      }
    }
    else {
      if (uVar7 < 0x30) {
        if (uVar9 == 0x2f) {
          Newtonsoft_Json_JsonTextReader__ParseComment(param_1,0);
          goto LAB_076523c0;
        }
        if (uVar9 != 0x2d) {
          if (uVar9 == 0x2e) goto LAB_07652564;
          goto LAB_0765230c;
        }
        if ((int)param_1[0x11] <= (int)(uVar1 + 1)) {
          uVar3 = Newtonsoft_Json_JsonTextReader__ReadChars(param_1,1,1);
          if ((uVar3 & 1) == 0) goto LAB_07652564;
          lVar8 = param_1[0x10];
          if (lVar8 == 0) goto LAB_07652594;
        }
        uVar1 = *(int *)((long)param_1 + 0x8c) + 1;
        if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_07652590;
        if (*(short *)(lVar8 + (long)(int)uVar1 * 2 + 0x20) == 0x49) {
          uVar4 = Newtonsoft_Json_JsonTextReader__ParseNumberNegativeInfinity(param_1,param_2);
          return uVar4;
        }
LAB_07652564:
        Newtonsoft_Json_JsonTextReader__ParseNumber(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0765258c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
        return uVar4;
      }
      if (uVar9 - 0x30 < 10) goto LAB_07652564;
    }
  }
  else {
    if (0x4e < uVar9) {
      if (uVar9 != 0x5d) {
        if (uVar9 == 0x6e) {
          Newtonsoft_Json_JsonTextReader__HandleNull(param_1);
          return 0;
        }
        goto LAB_0765230c;
      }
      *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
      if ((*(int *)((long)param_1 + 0x24) - 5U < 2) || (*(int *)((long)param_1 + 0x24) == 8)) {
        *(undefined4 *)(param_1 + 2) = 0xe;
        param_1[3] = 0;
        thunk_FUN_03f5d7b8(param_1 + 3,0);
        Newtonsoft_Json_JsonReader__ValidateEnd(param_1,0xe);
        return 0;
      }
      uVar7 = 0x5d;
      goto LAB_076525a0;
    }
    if (uVar9 == 0x49) {
      uVar4 = Newtonsoft_Json_JsonTextReader__ParseNumberPositiveInfinity(param_1,param_2);
      return uVar4;
    }
    if (uVar9 == 0x4e) {
      uVar4 = Newtonsoft_Json_JsonTextReader__ParseNumberNaN(param_1,param_2);
      return uVar4;
    }
  }
LAB_0765230c:
  *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Char__IsWhiteSpace(uVar7,0);
  if ((uVar3 & 1) != 0) goto LAB_076523c0;
LAB_076525a0:
  uVar4 = Newtonsoft_Json_JsonTextReader__CreateUnexpectedCharacterException(param_1,uVar7);
  goto LAB_076525a4;
}

