// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.Converter$$IsPrimitiveArray
// address: 0x74b5c0c
// body: available
// range: 0x74b5c0c-0x74b5edb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
System_Runtime_Serialization_Formatters_Binary_Converter__IsPrimitiveArray
          (long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_24;
  
  if ((DAT_09521460 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b98);
    FUN_03f5c2a4(&DAT_09187008);
    DAT_09521460 = 1;
  }
  *param_2 = 0;
  thunk_FUN_03f5d7b8(param_2,0);
  if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(DAT_09182b98 + 0xb8);
  if (*(long *)(lVar2 + 0xf8) == param_1) {
    local_24 = 1;
    uVar1 = FUN_03f5c42c(DAT_09187008,&local_24);
    *param_2 = uVar1;
    thunk_FUN_03f5d7b8(param_2,uVar1);
  }
  else {
    if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar2 = *(long *)(DAT_09182b98 + 0xb8);
    }
    if (*(long *)(lVar2 + 0x100) == param_1) {
      local_24 = 2;
    }
    else {
      if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar2 = *(long *)(DAT_09182b98 + 0xb8);
      }
      if (*(long *)(lVar2 + 0x108) == param_1) {
        local_24 = 3;
      }
      else {
        if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar2 = *(long *)(DAT_09182b98 + 0xb8);
        }
        if (*(long *)(lVar2 + 0x118) == param_1) {
          local_24 = 6;
        }
        else {
          if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar2 = *(long *)(DAT_09182b98 + 0xb8);
          }
          if (*(long *)(lVar2 + 0x120) == param_1) {
            local_24 = 7;
          }
          else {
            if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
              FUN_03f5c424();
              lVar2 = *(long *)(DAT_09182b98 + 0xb8);
            }
            if (*(long *)(lVar2 + 0x128) == param_1) {
              local_24 = 8;
            }
            else {
              if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
                FUN_03f5c424();
                lVar2 = *(long *)(DAT_09182b98 + 0xb8);
              }
              if (*(long *)(lVar2 + 0x130) == param_1) {
                local_24 = 9;
              }
              else {
                if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
                  FUN_03f5c424();
                  lVar2 = *(long *)(DAT_09182b98 + 0xb8);
                }
                if (*(long *)(lVar2 + 0x138) == param_1) {
                  local_24 = 10;
                }
                else {
                  if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
                    FUN_03f5c424();
                    lVar2 = *(long *)(DAT_09182b98 + 0xb8);
                  }
                  if (*(long *)(lVar2 + 0x140) == param_1) {
                    local_24 = 0xb;
                  }
                  else {
                    if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
                      FUN_03f5c424();
                      lVar2 = *(long *)(DAT_09182b98 + 0xb8);
                    }
                    if (*(long *)(lVar2 + 0x158) == param_1) {
                      local_24 = 0xe;
                    }
                    else {
                      if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
                        FUN_03f5c424();
                        lVar2 = *(long *)(DAT_09182b98 + 0xb8);
                      }
                      if (*(long *)(lVar2 + 0x160) == param_1) {
                        local_24 = 0xf;
                      }
                      else {
                        if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
                          FUN_03f5c424();
                          lVar2 = *(long *)(DAT_09182b98 + 0xb8);
                        }
                        if (*(long *)(lVar2 + 0x168) != param_1) {
                          return 0;
                        }
                        local_24 = 0x10;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar1 = FUN_03f5c42c(DAT_09187008,&local_24);
    *param_2 = uVar1;
    thunk_FUN_03f5d7b8(param_2,uVar1);
  }
  return 1;
}

