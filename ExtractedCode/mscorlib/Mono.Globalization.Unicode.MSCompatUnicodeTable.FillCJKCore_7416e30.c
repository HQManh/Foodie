// rea decompile_all
// name: Mono.Globalization.Unicode.MSCompatUnicodeTable$$FillCJKCore
// address: 0x7416e30
// body: available
// range: 0x7416e30-0x7417003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7417000 to 0x89db628 FUN_089db628 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Globalization_Unicode_MSCompatUnicodeTable__FillCJKCore
               (undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,undefined8 param_5
               ,long *param_6)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_09520f52 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187d38);
    FUN_03f5c2a4(&DAT_0921dd60);
    FUN_03f5c2a4(&DAT_09218cd8);
    FUN_03f5c2a4(&DAT_0921e0c0);
    FUN_03f5c2a4(&DAT_09218ef8);
    FUN_03f5c2a4(&DAT_09225e50);
    FUN_03f5c2a4(&DAT_09218cd0);
    FUN_03f5c2a4(&DAT_09225e48);
    FUN_03f5c2a4(&DAT_09218cc8);
    FUN_03f5c2a4(&DAT_09218f10);
    FUN_03f5c2a4(&DAT_09218ce0);
    DAT_09520f52 = 1;
  }
  if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09520f9d == '\0') {
    FUN_03f5c2a4(&DAT_09187d38);
    DAT_09520f9d = '\x01';
  }
  if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(char *)(*(long *)(DAT_09187d38 + 0xb8) + 0x90) != '\0') {
    uVar2 = System_String__op_Equality(param_1,DAT_09225e48,0);
    lVar4 = DAT_09218cc8;
    if ((uVar2 & 1) == 0) {
      uVar2 = System_String__op_Equality(param_1,DAT_09225e50,0);
      lVar4 = DAT_09218cd0;
      if ((uVar2 & 1) == 0) {
        uVar2 = System_String__op_Equality(param_1,DAT_0921dd60,0);
        if ((uVar2 & 1) != 0) {
          FUN_089db628(&PTR_DAT_08fe6000,DAT_09187d38);
          return;
        }
        uVar2 = System_String__op_Equality(param_1,DAT_0921e0c0,0);
        lVar4 = DAT_09218ce0;
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar7 = *(long *)(*(long *)(DAT_09187d38 + 0xb8) + 0x48);
        plVar5 = (long *)(*(long *)(DAT_09187d38 + 0xb8) + 0x68);
      }
      else {
        if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar7 = *(long *)(*(long *)(DAT_09187d38 + 0xb8) + 0x38);
        plVar5 = (long *)(*(long *)(DAT_09187d38 + 0xb8) + 0x58);
      }
    }
    else {
      if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = *(long *)(*(long *)(DAT_09187d38 + 0xb8) + 0x30);
      plVar5 = (long *)(*(long *)(DAT_09187d38 + 0xb8) + 0x50);
    }
    *param_3 = lVar7;
    lVar7 = *plVar5;
    *param_4 = lVar7;
    if ((lVar4 != 0) && (lVar7 == 0)) {
      uVar3 = System_String__Format(DAT_09218f10,lVar4,0);
      if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09187d38);
      }
      lVar7 = Mono_Globalization_Unicode_MSCompatUnicodeTable__GetResource(uVar3);
      if (lVar7 != 0) {
        lVar7 = System_IntPtr__op_Explicit(lVar7,0);
        if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09187d38);
        }
        uVar3 = DAT_09225e48;
        uVar1 = *(uint *)(lVar7 + 1);
        *param_3 = lVar7 + 5;
        *param_4 = (ulong)uVar1 + lVar7 + 5;
        uVar2 = System_String__op_Equality(param_1,uVar3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = System_String__op_Equality(param_1,DAT_09225e50,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = System_String__op_Equality(param_1,DAT_0921dd60,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = System_String__op_Equality(param_1,DAT_0921e0c0,0);
              if ((uVar2 & 1) != 0) {
                lVar7 = *param_3;
                if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar6 = *(long *)(DAT_09187d38 + 0xb8);
                lVar8 = *param_4;
                *(long *)(lVar6 + 0x48) = lVar7;
                *(long *)(lVar6 + 0x68) = lVar8;
              }
            }
            else {
              lVar7 = *param_3;
              if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar6 = *(long *)(DAT_09187d38 + 0xb8);
              lVar8 = *param_4;
              *(long *)(lVar6 + 0x40) = lVar7;
              *(long *)(lVar6 + 0x60) = lVar8;
            }
          }
          else {
            lVar7 = *param_3;
            if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar6 = *(long *)(DAT_09187d38 + 0xb8);
            lVar8 = *param_4;
            *(long *)(lVar6 + 0x38) = lVar7;
            *(long *)(lVar6 + 0x58) = lVar8;
          }
        }
        else {
          lVar7 = *param_3;
          if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar6 = *(long *)(DAT_09187d38 + 0xb8);
          lVar8 = *param_4;
          *(long *)(lVar6 + 0x30) = lVar7;
          *(long *)(lVar6 + 0x50) = lVar8;
        }
        uVar2 = System_String__op_Inequality(lVar4,DAT_09218ce0,0);
        if ((uVar2 & 1) == 0) {
          if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar4 = Mono_Globalization_Unicode_MSCompatUnicodeTable__GetResource(DAT_09218ef8);
          if (lVar4 != 0) {
            lVar4 = System_IntPtr__op_Explicit(lVar4,0);
            if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09187d38);
            }
            lVar7 = *(long *)(DAT_09187d38 + 0xb8);
            *param_6 = lVar4 + 5;
            *(long *)(lVar7 + 0x70) = lVar4 + 5;
          }
        }
      }
    }
  }
  return;
}

