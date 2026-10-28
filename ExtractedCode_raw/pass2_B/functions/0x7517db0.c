// rea decompile_all
// name: System.TimeZoneInfo$$.cctor
// address: 0x7517db0
// body: available
// range: 0x7517db0-0x7517f33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TimeZoneInfo___cctor(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_38;
  undefined8 local_28;
  
  if ((DAT_0952171e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091950a8);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918bdc0);
    FUN_03f5c2a4(&DAT_09211848);
    DAT_0952171e = 1;
  }
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_TimeZoneInfo__CreateCustomTimeZone
                    (DAT_09211848,**(undefined8 **)(DAT_0918bd60 + 0xb8),DAT_09211848,DAT_09211848);
  **(undefined8 **)(DAT_0918bdc0 + 0xb8) = uVar2;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918bdc0 + 0xb8),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_091950a8);
  System_Object___ctor(uVar2,0);
  puVar3 = (undefined8 *)(*(long *)(DAT_0918bdc0 + 0xb8) + 8);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_28 = 0;
  System_DateTime___ctor(&local_28,9999,0xc,0x1f,0);
  local_38 = 0;
  *(undefined8 *)(*(long *)(DAT_0918bdc0 + 0xb8) + 0x10) = local_28;
  System_DateTime___ctor(&local_38,1,1,2,0);
  *(undefined8 *)(*(long *)(DAT_0918bdc0 + 0xb8) + 0x18) = local_38;
  uVar2 = System_TimeSpan__FromHours(0x402c000000000000,0);
  lVar1 = DAT_0918bdc0;
  *(undefined8 *)(*(long *)(DAT_0918bdc0 + 0xb8) + 0x20) = uVar2;
  uVar2 = System_TimeSpan__op_UnaryNegation(*(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x20),0);
  *(undefined8 *)(*(long *)(DAT_0918bdc0 + 0xb8) + 0x28) = uVar2;
  return;
}

