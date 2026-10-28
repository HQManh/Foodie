// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader$$ReadStringIntoBuffer
// address: 0x765081c
// body: available
// range: 0x765081c-0x7650c83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7650b34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7650b60 to 0x7654488 Newtonsoft.Json.JsonTextReader$$FinishReadStringIntoBuffer (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7650b64 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7650c80 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader__ReadStringIntoBuffer(long param_1,ushort param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ushort *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ushort local_54 [2];
  ushort local_48 [2];
  ushort local_44 [2];
  
  lVar11 = *(long *)(param_1 + 0x80);
  uVar1 = *(uint *)(param_1 + 0x8c);
  local_44[0] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (lVar11 != 0) {
    uVar12 = (ulong)uVar1;
    uVar14 = uVar1;
    do {
      if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_07650b64;
      uVar4 = uVar14 + 1;
      uVar2 = *(ushort *)(lVar11 + (long)(int)uVar14 * 2 + 0x20);
      if (uVar2 < 0xe) {
        if (uVar2 == 0) {
          if ((*(uint *)(param_1 + 0x88) == uVar14) &&
             (iVar3 = Newtonsoft_Json_JsonTextReader__ReadData(param_1,1,0), uVar4 = uVar14,
             iVar3 == 0)) {
            *(uint *)(param_1 + 0x8c) = uVar14;
            thunk_FUN_03fc39d4(&DAT_09182ff8);
            FUN_039afb80();
            uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            puVar10 = local_48;
            local_48[0] = param_2;
LAB_07650bc8:
            uVar7 = FUN_03f5c42c(DAT_09535460,puVar10);
            puVar8 = &DAT_09212738;
            goto LAB_07650c48;
          }
        }
        else if (uVar2 == 10) {
          *(uint *)(param_1 + 0x8c) = uVar4;
          *(uint *)(param_1 + 0x90) = uVar4;
          *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
        }
        else if (uVar2 == 0xd) {
          *(uint *)(param_1 + 0x8c) = uVar14;
          Newtonsoft_Json_JsonTextReader__ProcessCarriageReturn(param_1,1);
          uVar4 = *(uint *)(param_1 + 0x8c);
        }
      }
      else if ((uVar2 == 0x22) || (uVar2 == 0x27)) {
        if (uVar2 == param_2) {
          Newtonsoft_Json_JsonTextReader__FinishReadStringIntoBuffer(param_1,uVar14,uVar1,uVar12);
          return;
        }
      }
      else if (uVar2 == 0x5c) {
        *(uint *)(param_1 + 0x8c) = uVar4;
        if (*(int *)(param_1 + 0x88) <= (int)uVar4) {
          uVar5 = Newtonsoft_Json_JsonTextReader__ReadChars(param_1,0,1);
          if ((uVar5 & 1) == 0) {
            thunk_FUN_03fc39d4(&DAT_09182ff8);
            FUN_039afb80();
            uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            puVar10 = local_54;
            local_54[0] = param_2;
            goto LAB_07650bc8;
          }
          lVar11 = *(long *)(param_1 + 0x80);
          if (lVar11 == 0) break;
        }
        if (*(uint *)(lVar11 + 0x18) <= uVar4) {
LAB_07650b64:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar5 = lVar11 + (long)(int)uVar4 * 2;
        uVar4 = uVar14 + 2;
        uVar15 = (ulong)uVar4;
        local_44[0] = *(ushort *)(uVar5 + 0x20);
        uVar13 = (ulong)local_44[0];
        if (local_44[0] < 0x5d) {
          if (local_44[0] < 0x28) {
            if ((local_44[0] != 0x22) && (local_44[0] != 0x27)) {
LAB_07650be0:
              *(uint *)(param_1 + 0x8c) = uVar4;
              thunk_FUN_03fc39d4(&DAT_09182ff8);
              FUN_039afb80();
              uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
              FUN_039afb80(DAT_09535460);
              uVar7 = System_Char__ToString(local_44,0);
              uVar9 = thunk_FUN_03fc39d4(&DAT_092145e0);
              uVar7 = System_String__Concat(uVar9,uVar7,0);
              puVar8 = &DAT_091fc850;
LAB_07650c48:
              uVar9 = thunk_FUN_03fc39d4(puVar8);
              uVar6 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar9,uVar6,uVar7,0);
              uVar6 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar6);
              uVar7 = thunk_FUN_03fc39d4(&DAT_091d1cc0);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar6,uVar7);
            }
          }
          else if ((local_44[0] != 0x2f) && (local_44[0] != 0x5c)) goto LAB_07650be0;
        }
        else if (local_44[0] < 0x67) {
          if (local_44[0] == 0x62) {
            uVar13 = 8;
          }
          else {
            if (local_44[0] != 0x66) goto LAB_07650be0;
            uVar13 = 0xc;
          }
        }
        else if (local_44[0] < 0x74) {
          if (local_44[0] == 0x6e) {
            uVar13 = 10;
          }
          else {
            if (local_44[0] != 0x72) goto LAB_07650be0;
            uVar13 = 0xd;
          }
        }
        else if (local_44[0] == 0x75) {
          *(uint *)(param_1 + 0x8c) = uVar4;
          uVar5 = Newtonsoft_Json_JsonTextReader__ParseUnicode(param_1);
          uVar13 = uVar5 & 0xffffffff;
          uVar5 = Newtonsoft_Json_Utilities_StringUtils__IsLowSurrogate(uVar5,0);
          if ((uVar5 & 1) == 0) {
            uVar5 = Newtonsoft_Json_Utilities_StringUtils__IsHighSurrogate(uVar13,0);
            if ((uVar5 & 1) != 0) {
              uVar15 = (ulong)*(uint *)(param_1 + 0x8c);
              uVar5 = uVar13;
              do {
                uVar4 = (uint)uVar15;
                if (*(int *)(param_1 + 0x88) <= (int)(uVar4 + 2)) {
                  uVar13 = Newtonsoft_Json_JsonTextReader__ReadChars(param_1,2,1);
                  if ((uVar13 & 1) == 0) goto LAB_07650a08;
                  uVar4 = *(uint *)(param_1 + 0x8c);
                }
                lVar11 = *(long *)(param_1 + 0x80);
                if (lVar11 == 0) goto LAB_07650b34;
                if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_07650b64;
                if (*(short *)(lVar11 + (long)(int)uVar4 * 2 + 0x20) != 0x5c) goto LAB_07650a08;
                if (*(uint *)(lVar11 + 0x18) <= uVar4 + 1) goto LAB_07650b64;
                if (*(short *)(lVar11 + (long)(int)(uVar4 + 1) * 2 + 0x20) != 0x75)
                goto LAB_07650a08;
                *(uint *)(param_1 + 0x8c) = uVar4 + 2;
                uVar15 = Newtonsoft_Json_JsonTextReader__ParseUnicode(param_1);
                uVar13 = uVar15 & 0xffffffff;
                uVar15 = Newtonsoft_Json_Utilities_StringUtils__IsLowSurrogate(uVar15,0);
                if ((uVar15 & 1) == 0) {
                  uVar4 = Newtonsoft_Json_Utilities_StringUtils__IsHighSurrogate(uVar13,0);
                  uVar5 = 0xfffd;
                }
                else {
                  uVar4 = 0;
                }
                Newtonsoft_Json_JsonTextReader__EnsureBufferNotEmpty(param_1);
                Newtonsoft_Json_JsonTextReader__WriteCharToBuffer(param_1,uVar5,uVar12,uVar14);
                uVar15 = (ulong)*(uint *)(param_1 + 0x8c);
                uVar12 = uVar15;
                uVar5 = uVar13;
              } while ((uVar4 & 1) != 0);
            }
          }
          else {
LAB_07650a08:
            uVar13 = 0xfffd;
          }
          uVar15 = (ulong)*(uint *)(param_1 + 0x8c);
          uVar5 = uVar12;
        }
        else {
          if (local_44[0] != 0x74) goto LAB_07650be0;
          uVar13 = 9;
        }
        Newtonsoft_Json_JsonTextReader__EnsureBufferNotEmpty(uVar5,param_1);
        Newtonsoft_Json_JsonTextReader__WriteCharToBuffer(param_1,uVar13,uVar12,uVar14);
        uVar12 = uVar15;
        uVar4 = (uint)uVar15;
      }
      uVar14 = uVar4;
      lVar11 = *(long *)(param_1 + 0x80);
    } while (lVar11 != 0);
  }
LAB_07650b34:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

