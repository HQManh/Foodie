// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader$$ParseObject
// address: 0x76519e0
// body: available
// range: 0x76519e0-0x7651b4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7651b48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7651b4c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 Newtonsoft_Json_JsonTextReader__ParseObject(long param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x80);
  do {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = *(uint *)(param_1 + 0x8c);
    if (*(uint *)(lVar5 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar1 = *(ushort *)(lVar5 + (long)(int)uVar2 * 2 + 0x20);
    if (uVar1 < 0xe) {
      if (uVar1 == 0) {
        if (*(uint *)(param_1 + 0x88) != uVar2) goto LAB_07651ab4;
        iVar3 = Newtonsoft_Json_JsonTextReader__ReadData(param_1,0,0);
        if (iVar3 == 0) {
          return 0;
        }
      }
      else {
        if (uVar1 == 9) goto LAB_07651ab4;
        if (uVar1 == 10) {
          *(uint *)(param_1 + 0x8c) = uVar2 + 1;
          *(uint *)(param_1 + 0x90) = uVar2 + 1;
          *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
        }
        else {
          if (uVar1 != 0xd) goto LAB_07651a60;
          Newtonsoft_Json_JsonTextReader__ProcessCarriageReturn(param_1,0);
        }
      }
    }
    else {
      if (uVar1 != 0x20) {
        if (uVar1 == 0x2f) {
          Newtonsoft_Json_JsonTextReader__ParseComment(param_1,1);
          return 1;
        }
        if (uVar1 == 0x7d) {
          *(undefined4 *)(param_1 + 0x10) = 0xd;
          *(undefined8 *)(param_1 + 0x18) = 0;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
          Newtonsoft_Json_JsonReader__ValidateEnd(param_1,0xd);
          *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
          return 1;
        }
LAB_07651a60:
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Char__IsWhiteSpace(uVar1,0);
        if ((uVar4 & 1) == 0) {
          Newtonsoft_Json_JsonTextReader__ParseProperty(param_1);
          return 1;
        }
        uVar2 = *(uint *)(param_1 + 0x8c);
      }
LAB_07651ab4:
      *(uint *)(param_1 + 0x8c) = uVar2 + 1;
    }
    lVar5 = *(long *)(param_1 + 0x80);
  } while( true );
}

