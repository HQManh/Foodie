// rea decompile_all
// name: FUN_07417004
// address: 0x7417004
// body: available
// range: 0x7417004-0x7417027 inclusive
// range: 0x7417070-0x7417293 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_07417004(long *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar6;
  long lVar7;
  long *unaff_x25;
  
  lVar7 = *param_1;
  if (*(int *)(param_2 + 0xe4) == 0) {
    FUN_03f5c424();
    param_2 = *unaff_x25;
  }
  lVar4 = *(long *)(param_2 + 0xb8);
  *unaff_x21 = *(long *)(lVar4 + 0x40);
  lVar4 = *(long *)(lVar4 + 0x60);
  *unaff_x20 = lVar4;
  if ((lVar7 != 0) && (lVar4 == 0)) {
    uVar2 = System_String__Format(DAT_09218f10,lVar7,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      FUN_03f5c424(*unaff_x25);
    }
    lVar4 = Mono_Globalization_Unicode_MSCompatUnicodeTable__GetResource(uVar2);
    if (lVar4 != 0) {
      lVar4 = System_IntPtr__op_Explicit(lVar4,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        FUN_03f5c424(*unaff_x25);
      }
      uVar1 = *(uint *)(lVar4 + 1);
      *unaff_x21 = lVar4 + 5;
      *unaff_x20 = (ulong)uVar1 + lVar4 + 5;
      uVar3 = System_String__op_Equality();
      if ((uVar3 & 1) == 0) {
        uVar3 = System_String__op_Equality();
        if ((uVar3 & 1) == 0) {
          uVar3 = System_String__op_Equality();
          if ((uVar3 & 1) == 0) {
            uVar3 = System_String__op_Equality();
            if ((uVar3 & 1) != 0) {
              lVar4 = *unaff_x25;
              lVar6 = *unaff_x21;
              if (*(int *)(lVar4 + 0xe4) == 0) {
                FUN_03f5c424();
                lVar4 = *unaff_x25;
              }
              lVar4 = *(long *)(lVar4 + 0xb8);
              lVar5 = *unaff_x20;
              *(long *)(lVar4 + 0x48) = lVar6;
              *(long *)(lVar4 + 0x68) = lVar5;
            }
          }
          else {
            lVar4 = *unaff_x25;
            lVar6 = *unaff_x21;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              FUN_03f5c424();
              lVar4 = *unaff_x25;
            }
            lVar4 = *(long *)(lVar4 + 0xb8);
            lVar5 = *unaff_x20;
            *(long *)(lVar4 + 0x40) = lVar6;
            *(long *)(lVar4 + 0x60) = lVar5;
          }
        }
        else {
          lVar4 = *unaff_x25;
          lVar6 = *unaff_x21;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar4 = *unaff_x25;
          }
          lVar4 = *(long *)(lVar4 + 0xb8);
          lVar5 = *unaff_x20;
          *(long *)(lVar4 + 0x38) = lVar6;
          *(long *)(lVar4 + 0x58) = lVar5;
        }
      }
      else {
        lVar4 = *unaff_x25;
        lVar6 = *unaff_x21;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar4 = *unaff_x25;
        }
        lVar4 = *(long *)(lVar4 + 0xb8);
        lVar5 = *unaff_x20;
        *(long *)(lVar4 + 0x30) = lVar6;
        *(long *)(lVar4 + 0x50) = lVar5;
      }
      uVar3 = System_String__op_Inequality(lVar7,DAT_09218ce0,0);
      if ((uVar3 & 1) == 0) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar7 = Mono_Globalization_Unicode_MSCompatUnicodeTable__GetResource(DAT_09218ef8);
        if (lVar7 != 0) {
          lVar7 = System_IntPtr__op_Explicit(lVar7,0);
          lVar4 = *unaff_x25;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            FUN_03f5c424(lVar4);
            lVar4 = *unaff_x25;
          }
          lVar4 = *(long *)(lVar4 + 0xb8);
          *unaff_x19 = lVar7 + 5;
          *(long *)(lVar4 + 0x70) = lVar7 + 5;
        }
      }
    }
  }
  return;
}

