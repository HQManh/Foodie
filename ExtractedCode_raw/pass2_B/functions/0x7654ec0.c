// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader$$ParseConstructor
// address: 0x7654ec0
// body: available
// range: 0x7654ec0-0x76551df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7654fa0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76550e0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7655114 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader__ParseConstructor(long param_1)

{
  int iVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_095223b8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0921fc18);
    DAT_095223b8 = 1;
  }
  uVar5 = Newtonsoft_Json_JsonTextReader__MatchValueWithTrailingSeparator(param_1,DAT_0921fc18);
  if ((uVar5 & 1) == 0) {
    puVar7 = &DAT_09211c70;
LAB_076550ec:
    uVar6 = thunk_FUN_03fc39d4(puVar7);
LAB_076550f0:
    uVar6 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar6);
    uVar10 = thunk_FUN_03fc39d4(&DAT_091d1c20);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar10);
  }
  Newtonsoft_Json_JsonTextReader__EatWhitespace(param_1);
  lVar9 = *(long *)(param_1 + 0x80);
  if (lVar9 != 0) {
    iVar1 = *(int *)(param_1 + 0x8c);
    do {
      uVar11 = *(uint *)(param_1 + 0x8c);
      if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_076550e0;
      sVar2 = *(short *)(lVar9 + (long)(int)uVar11 * 2 + 0x20);
      if (sVar2 == 0) {
        if (*(uint *)(param_1 + 0x88) != uVar11) {
LAB_07655008:
          *(uint *)(param_1 + 0x8c) = uVar11 + 1;
          goto LAB_07655010;
        }
        iVar4 = Newtonsoft_Json_JsonTextReader__ReadData(param_1,1,0);
        if (iVar4 == 0) {
          puVar7 = &DAT_09211d50;
          goto LAB_076550ec;
        }
      }
      else {
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_Char__IsLetterOrDigit(sVar2,0);
        if ((uVar5 & 1) == 0) {
          if (sVar2 == 10) {
            uVar11 = *(uint *)(param_1 + 0x8c);
            *(uint *)(param_1 + 0x90) = uVar11 + 1;
            *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
            *(uint *)(param_1 + 0x8c) = uVar11 + 1;
LAB_07655010:
            local_40 = 0;
            uStack_38 = 0;
            Newtonsoft_Json_Utilities_StringReference___ctor
                      (&local_40,*(undefined8 *)(param_1 + 0x80),iVar1,uVar11 - iVar1,0);
            *(undefined8 *)(param_1 + 0xb8) = uStack_38;
            *(undefined8 *)(param_1 + 0xb0) = local_40;
            thunk_FUN_03f5d7b8(param_1 + 0xb0,0);
            uVar6 = Newtonsoft_Json_Utilities_StringReference__ToString(param_1 + 0xb0,0);
            Newtonsoft_Json_JsonTextReader__EatWhitespace(param_1);
            lVar9 = *(long *)(param_1 + 0x80);
            if (lVar9 == 0) break;
            uVar11 = *(uint *)(param_1 + 0x8c);
            if (*(uint *)(lVar9 + 0x18) <= uVar11) {
LAB_076550e0:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (*(short *)(lVar9 + (long)(int)uVar11 * 2 + 0x20) == 0x28) {
              *(uint *)(param_1 + 0x8c) = uVar11 + 1;
              *(undefined4 *)(param_1 + 0xa8) = 0;
              *(undefined8 *)(param_1 + 0xb0) = 0;
              *(undefined8 *)(param_1 + 0xb8) = 0;
              *(undefined4 *)(param_1 + 0x10) = 3;
              *(undefined8 *)(param_1 + 0x18) = uVar6;
              thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar6);
              *(undefined4 *)(param_1 + 0x24) = 9;
              Newtonsoft_Json_JsonReader__Push(param_1,3);
              return;
            }
            thunk_FUN_03fc39d4(&DAT_09182ff8);
            FUN_039afb80();
            uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            uVar10 = *(undefined8 *)(param_1 + 0x80);
            iVar1 = *(int *)(param_1 + 0x8c);
            FUN_039b1d98(uVar10);
            uVar3 = FUN_03ebadd8(uVar10,(long)iVar1);
            local_40 = CONCAT62(local_40._2_6_,uVar3);
            uVar10 = FUN_03f5c42c(DAT_09535460,&local_40);
            uVar8 = thunk_FUN_03fc39d4(&DAT_09211c50);
          }
          else {
            if (sVar2 == 0xd) {
              uVar11 = *(uint *)(param_1 + 0x8c);
              Newtonsoft_Json_JsonTextReader__ProcessCarriageReturn(param_1,1);
              goto LAB_07655010;
            }
            if (*(int *)(DAT_09535460 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = System_Char__IsWhiteSpace(sVar2,0);
            if ((uVar5 & 1) != 0) {
              uVar11 = *(uint *)(param_1 + 0x8c);
              goto LAB_07655008;
            }
            if (sVar2 == 0x28) {
              uVar11 = *(uint *)(param_1 + 0x8c);
              goto LAB_07655010;
            }
            thunk_FUN_03fc39d4(&DAT_09182ff8);
            FUN_039afb80();
            uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            local_40 = CONCAT62(local_40._2_6_,sVar2);
            uVar10 = FUN_03f5c42c(DAT_09535460,&local_40);
            uVar8 = thunk_FUN_03fc39d4(&DAT_09211c50);
          }
          uVar6 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar6,uVar10,0);
          goto LAB_076550f0;
        }
        *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
      }
      lVar9 = *(long *)(param_1 + 0x80);
    } while (lVar9 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

