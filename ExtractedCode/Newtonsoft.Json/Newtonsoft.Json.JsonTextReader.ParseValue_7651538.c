// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader$$ParseValue
// address: 0x7651538
// body: available
// range: 0x7651538-0x76519df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x765196c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7651970 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7651998 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_JsonTextReader__ParseValue(long param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x80);
joined_r0x07651544:
  if (lVar9 == 0) {
LAB_07651970:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar8 = *(uint *)(param_1 + 0x8c);
  if (*(uint *)(lVar9 + 0x18) <= uVar8) {
LAB_0765196c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  uVar1 = *(ushort *)(lVar9 + (long)(int)uVar8 * 2 + 0x20);
  uVar4 = (uint)uVar1;
  if (uVar1 < 0x4f) {
    if (uVar1 < 0x21) {
      if (uVar4 != 0) {
        if (10 < uVar1) {
          if (uVar4 - 0xb < 2) goto LAB_076516a8;
          if (uVar1 != 0xd) goto LAB_076516e0;
          Newtonsoft_Json_JsonTextReader__ProcessCarriageReturn(param_1,0);
          goto LAB_076516d4;
        }
        if (uVar4 != 9) {
          if (uVar4 == 10) {
            *(uint *)(param_1 + 0x8c) = uVar8 + 1;
            *(uint *)(param_1 + 0x90) = uVar8 + 1;
            *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
            goto LAB_076516d4;
          }
LAB_076516e0:
          if (uVar1 != 0x20) goto LAB_076516a8;
        }
        goto LAB_076516d0;
      }
      if (*(uint *)(param_1 + 0x88) != uVar8) goto LAB_076516d0;
      iVar3 = Newtonsoft_Json_JsonTextReader__ReadData(param_1,0,0);
      if (iVar3 == 0) {
        return 0;
      }
LAB_076516d4:
      lVar9 = *(long *)(param_1 + 0x80);
      goto joined_r0x07651544;
    }
    if (uVar1 < 0x30) {
      if (uVar1 == 0x22) {
LAB_076517a0:
        Newtonsoft_Json_JsonTextReader__ParseString(param_1,uVar4,0);
        return 1;
      }
      if (0x2b < uVar1) {
        if (uVar1 == 0x2c) {
          Newtonsoft_Json_JsonReader__SetToken(param_1,0xc,0,1);
          return 1;
        }
        if (uVar1 != 0x2d) {
          if (uVar4 == 0x2f) {
            Newtonsoft_Json_JsonTextReader__ParseComment(param_1,1);
            return 1;
          }
          goto LAB_076516a8;
        }
        if (*(int *)(param_1 + 0x88) <= (int)(uVar8 + 1)) {
          uVar5 = Newtonsoft_Json_JsonTextReader__ReadChars(param_1,1,1);
          if ((uVar5 & 1) == 0) goto LAB_07651720;
          lVar9 = *(long *)(param_1 + 0x80);
          if (lVar9 == 0) goto LAB_07651970;
        }
        uVar8 = *(int *)(param_1 + 0x8c) + 1;
        if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_0765196c;
        if (*(short *)(lVar9 + (long)(int)uVar8 * 2 + 0x20) == 0x49) {
          Newtonsoft_Json_JsonTextReader__ParseNumberNegativeInfinity(param_1,0);
          return 1;
        }
        goto LAB_07651720;
      }
      if (uVar1 == 0x27) goto LAB_076517a0;
      if (uVar1 == 0x29) {
        *(uint *)(param_1 + 0x8c) = uVar8 + 1;
        *(undefined4 *)(param_1 + 0x10) = 0xf;
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
        uVar6 = 0xf;
        goto LAB_076518c4;
      }
    }
    else {
      if (uVar4 == 0x49) {
        Newtonsoft_Json_JsonTextReader__ParseNumberPositiveInfinity(param_1,0);
        return 1;
      }
      if (uVar1 == 0x4e) {
        Newtonsoft_Json_JsonTextReader__ParseNumberNaN(param_1,0);
        return 1;
      }
    }
  }
  else {
    if (0x66 < uVar4) {
      if (0x74 < uVar4) {
        if (uVar1 == 0x75) {
          Newtonsoft_Json_JsonTextReader__ParseUndefined(param_1);
          return 1;
        }
        if (uVar1 == 0x7b) {
          *(uint *)(param_1 + 0x8c) = uVar8 + 1;
          *(undefined4 *)(param_1 + 0x10) = 1;
          *(undefined8 *)(param_1 + 0x18) = 0;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
          *(undefined4 *)(param_1 + 0x24) = 3;
          Newtonsoft_Json_JsonReader__Push(param_1,1);
          return 1;
        }
        goto LAB_076516a8;
      }
      if (uVar1 != 0x6e) {
        if (uVar1 == 0x74) {
          Newtonsoft_Json_JsonTextReader__ParseTrue(param_1);
          return 1;
        }
        goto LAB_076516a8;
      }
      if (*(int *)(param_1 + 0x88) <= (int)(uVar8 + 1)) {
        uVar5 = Newtonsoft_Json_JsonTextReader__ReadChars(param_1,1,1);
        if ((uVar5 & 1) == 0) {
          *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
          uVar6 = Newtonsoft_Json_JsonReader__CreateUnexpectedEndException(param_1);
          goto LAB_07651980;
        }
        lVar9 = *(long *)(param_1 + 0x80);
        if (lVar9 == 0) goto LAB_07651970;
        uVar8 = *(uint *)(param_1 + 0x8c);
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar8 + 1) goto LAB_0765196c;
      sVar2 = *(short *)(lVar9 + (long)(int)(uVar8 + 1) * 2 + 0x20);
      if (sVar2 == 0x65) {
        Newtonsoft_Json_JsonTextReader__ParseConstructor(param_1);
        return 1;
      }
      if (sVar2 == 0x75) {
        Newtonsoft_Json_JsonTextReader__ParseNull(param_1);
        return 1;
      }
      FUN_039b1d98(lVar9);
      uVar4 = FUN_03ebadd8(lVar9,(long)(int)uVar8);
      goto LAB_0765197c;
    }
    if (uVar1 == 0x5b) {
      *(uint *)(param_1 + 0x8c) = uVar8 + 1;
      *(undefined4 *)(param_1 + 0x10) = 2;
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x24) = 5;
      Newtonsoft_Json_JsonReader__Push(param_1,2);
      return 1;
    }
    if (uVar1 == 0x5d) {
      *(uint *)(param_1 + 0x8c) = uVar8 + 1;
      *(undefined4 *)(param_1 + 0x10) = 0xe;
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      uVar6 = 0xe;
LAB_076518c4:
      Newtonsoft_Json_JsonReader__ValidateEnd(param_1,uVar6);
      return 1;
    }
    if (uVar1 == 0x66) {
      Newtonsoft_Json_JsonTextReader__ParseFalse(param_1);
      return 1;
    }
  }
LAB_076516a8:
  if (*(int *)(DAT_09535460 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = System_Char__IsWhiteSpace(uVar4,0);
  if ((uVar5 & 1) != 0) {
    uVar8 = *(uint *)(param_1 + 0x8c);
LAB_076516d0:
    *(uint *)(param_1 + 0x8c) = uVar8 + 1;
    goto LAB_076516d4;
  }
  if (*(int *)(DAT_09535460 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = System_Char__IsNumber(uVar4,0);
  if (((uVar4 - 0x2d & 0xffff) < 2) || ((uVar5 & 1) != 0)) {
LAB_07651720:
    Newtonsoft_Json_JsonTextReader__ParseNumber(param_1,0);
    return 1;
  }
LAB_0765197c:
  uVar6 = Newtonsoft_Json_JsonTextReader__CreateUnexpectedCharacterException(param_1,uVar4);
LAB_07651980:
  uVar7 = thunk_FUN_03fc39d4(&DAT_091d1c80);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar7);
}

