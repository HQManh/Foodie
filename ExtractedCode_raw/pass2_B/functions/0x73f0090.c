// rea decompile_all
// name: Mono.Security.ASN1Convert$$ToOid
// address: 0x73f0090
// body: available
// range: 0x73f0090-0x73f0303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f02b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f02fc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f0300 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_ASN1Convert__ToOid(long param_1)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong local_38;
  byte local_28 [4];
  byte local_24 [4];
  
  if ((DAT_09520e10 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_09520e10 = 1;
  }
  local_24[0] = 0;
  local_28[0] = 0;
  local_38 = 0;
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_09217a50);
    System_ArgumentNullException___ctor(uVar5,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091bf518);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar6);
  }
  lVar3 = Mono_Security_ASN1__get_Value(param_1);
  plVar4 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar4,0);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    bVar1 = *(byte *)(lVar3 + 0x20);
    local_24[0] = bVar1 / 0x28;
    local_28[0] = bVar1 % 0x28;
    if (0x77 < bVar1) {
      cVar2 = local_24[0] * '(';
      local_24[0] = 2;
      local_28[0] = local_28[0] + cVar2 + 0xb0;
    }
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    uVar5 = System_Byte__ToString(local_24,uVar5,0);
    if (plVar4 != (long *)0x0) {
      System_Text_StringBuilder__Append(plVar4,uVar5,0);
      System_Text_StringBuilder__Append(plVar4,DAT_091f8f68,0);
      uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar5 = System_Byte__ToString(local_28,uVar5,0);
      System_Text_StringBuilder__Append(plVar4,uVar5,0);
      uVar5 = *(undefined8 *)(lVar3 + 0x18);
      local_38 = 0;
      local_24[0] = 1;
      if (1 < (int)uVar5) {
        local_38 = 0;
        do {
          bVar1 = *(byte *)(lVar3 + (ulong)local_24[0] + 0x20);
          local_38 = (ulong)bVar1 & 0x7f | local_38 << 7;
          if (-1 < (char)bVar1) {
            System_Text_StringBuilder__Append(plVar4,DAT_091f8f68,0);
            if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            uVar5 = System_UInt64__ToString(&local_38,uVar5,0);
            System_Text_StringBuilder__Append(plVar4,uVar5,0);
            uVar5 = *(undefined8 *)(lVar3 + 0x18);
            local_38 = 0;
          }
          local_24[0] = local_24[0] + 1;
        } while ((int)(uint)local_24[0] < (int)uVar5);
      }
      (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

