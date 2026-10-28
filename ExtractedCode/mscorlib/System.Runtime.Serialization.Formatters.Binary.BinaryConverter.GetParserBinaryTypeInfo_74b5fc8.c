// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.BinaryConverter$$GetParserBinaryTypeInfo
// address: 0x74b5fc8
// body: available
// range: 0x74b5fc8-0x74b61bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b61bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
System_Runtime_Serialization_Formatters_Binary_BinaryConverter__GetParserBinaryTypeInfo
          (long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  int local_24;
  
  if ((DAT_09521449 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b98);
    FUN_03f5c2a4(&DAT_09187008);
    DAT_09521449 = 1;
  }
  *param_2 = 0;
  thunk_FUN_03f5d7b8(param_2,0);
  if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = *(long *)(DAT_09182b98 + 0xb8);
  if (*(long **)(lVar3 + 0x38) == param_1) {
    uVar4 = 1;
  }
  else {
    if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar3 = *(long *)(DAT_09182b98 + 0xb8);
    }
    if (*(long **)(lVar3 + 0xc0) == param_1) {
      uVar4 = 2;
    }
    else {
      if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar3 = *(long *)(DAT_09182b98 + 0xb8);
      }
      if (*(long **)(lVar3 + 0xe8) == param_1) {
        uVar4 = 5;
      }
      else {
        if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar3 = *(long *)(DAT_09182b98 + 0xb8);
        }
        if (*(long **)(lVar3 + 0xf0) == param_1) {
          uVar4 = 6;
        }
        else {
          if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = System_Runtime_Serialization_Formatters_Binary_Converter__IsPrimitiveArray
                            (param_1,param_2);
          if ((uVar1 & 1) == 0) {
            if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            local_24 = System_Runtime_Serialization_Formatters_Binary_Converter__ToCode(param_1);
            if (local_24 == 0) {
              uVar2 = System_Reflection_Assembly__GetAssembly(param_1,0);
              if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09182b98);
              }
              uVar1 = System_Reflection_Assembly__op_Equality
                                (uVar2,*(undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0xd0),0);
              if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar4 = 3;
              if ((uVar1 & 1) == 0) {
                uVar4 = 4;
              }
              uVar2 = (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
              *param_2 = uVar2;
              thunk_FUN_03f5d7b8(param_2,uVar2);
            }
            else {
              uVar2 = FUN_03f5c42c(DAT_09187008,&local_24);
              *param_2 = uVar2;
              thunk_FUN_03f5d7b8(param_2,uVar2);
              uVar4 = 0;
            }
          }
          else {
            uVar4 = 7;
          }
        }
      }
    }
  }
  return uVar4;
}

