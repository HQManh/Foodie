// rea decompile_all
// name: FUN_0402e5c4
// address: 0x402e5c4
// body: available
// range: 0x402e5c4-0x402ea0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_0402e5c4(undefined8 *param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x82) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x7f);
  }
  else {
    operator_delete((void *)param_1[0x84]);
    bVar1 = *(byte *)(param_1 + 0x7f);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x7c);
  }
  else {
    operator_delete((void *)param_1[0x81]);
    bVar1 = *(byte *)(param_1 + 0x7c);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x79);
  }
  else {
    operator_delete((void *)param_1[0x7e]);
    bVar1 = *(byte *)(param_1 + 0x79);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x76);
  }
  else {
    operator_delete((void *)param_1[0x7b]);
    bVar1 = *(byte *)(param_1 + 0x76);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x73);
  }
  else {
    operator_delete((void *)param_1[0x78]);
    bVar1 = *(byte *)(param_1 + 0x73);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x70);
  }
  else {
    operator_delete((void *)param_1[0x75]);
    bVar1 = *(byte *)(param_1 + 0x70);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x6d);
  }
  else {
    operator_delete((void *)param_1[0x72]);
    bVar1 = *(byte *)(param_1 + 0x6d);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x6a);
  }
  else {
    operator_delete((void *)param_1[0x6f]);
    bVar1 = *(byte *)(param_1 + 0x6a);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x67);
  }
  else {
    operator_delete((void *)param_1[0x6c]);
    bVar1 = *(byte *)(param_1 + 0x67);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 100);
  }
  else {
    operator_delete((void *)param_1[0x69]);
    bVar1 = *(byte *)(param_1 + 100);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x61);
  }
  else {
    operator_delete((void *)param_1[0x66]);
    bVar1 = *(byte *)(param_1 + 0x61);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x5e);
  }
  else {
    operator_delete((void *)param_1[99]);
    bVar1 = *(byte *)(param_1 + 0x5e);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x5b);
  }
  else {
    operator_delete((void *)param_1[0x60]);
    bVar1 = *(byte *)(param_1 + 0x5b);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x58);
  }
  else {
    operator_delete((void *)param_1[0x5d]);
    bVar1 = *(byte *)(param_1 + 0x58);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x55);
  }
  else {
    operator_delete((void *)param_1[0x5a]);
    bVar1 = *(byte *)(param_1 + 0x55);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x52);
  }
  else {
    operator_delete((void *)param_1[0x57]);
    bVar1 = *(byte *)(param_1 + 0x52);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x4f);
  }
  else {
    operator_delete((void *)param_1[0x54]);
    bVar1 = *(byte *)(param_1 + 0x4f);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x4c);
  }
  else {
    operator_delete((void *)param_1[0x51]);
    bVar1 = *(byte *)(param_1 + 0x4c);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x49);
  }
  else {
    operator_delete((void *)param_1[0x4e]);
    bVar1 = *(byte *)(param_1 + 0x49);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x46);
  }
  else {
    operator_delete((void *)param_1[0x4b]);
    bVar1 = *(byte *)(param_1 + 0x46);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x43);
  }
  else {
    operator_delete((void *)param_1[0x48]);
    bVar1 = *(byte *)(param_1 + 0x43);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  else {
    operator_delete((void *)param_1[0x45]);
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x3d);
  }
  else {
    operator_delete((void *)param_1[0x42]);
    bVar1 = *(byte *)(param_1 + 0x3d);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x3a);
  }
  else {
    operator_delete((void *)param_1[0x3f]);
    bVar1 = *(byte *)(param_1 + 0x3a);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x37);
  }
  else {
    operator_delete((void *)param_1[0x3c]);
    bVar1 = *(byte *)(param_1 + 0x37);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x34);
  }
  else {
    operator_delete((void *)param_1[0x39]);
    bVar1 = *(byte *)(param_1 + 0x34);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x31);
  }
  else {
    operator_delete((void *)param_1[0x36]);
    bVar1 = *(byte *)(param_1 + 0x31);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x2e);
  }
  else {
    operator_delete((void *)param_1[0x33]);
    bVar1 = *(byte *)(param_1 + 0x2e);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x2b);
  }
  else {
    operator_delete((void *)param_1[0x30]);
    bVar1 = *(byte *)(param_1 + 0x2b);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  else {
    operator_delete((void *)param_1[0x2d]);
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x25);
  }
  else {
    operator_delete((void *)param_1[0x2a]);
    bVar1 = *(byte *)(param_1 + 0x25);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x22);
  }
  else {
    operator_delete((void *)param_1[0x27]);
    bVar1 = *(byte *)(param_1 + 0x22);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x1f);
  }
  else {
    operator_delete((void *)param_1[0x24]);
    bVar1 = *(byte *)(param_1 + 0x1f);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x1c);
  }
  else {
    operator_delete((void *)param_1[0x21]);
    bVar1 = *(byte *)(param_1 + 0x1c);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x19);
  }
  else {
    operator_delete((void *)param_1[0x1e]);
    bVar1 = *(byte *)(param_1 + 0x19);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x16);
  }
  else {
    operator_delete((void *)param_1[0x1b]);
    bVar1 = *(byte *)(param_1 + 0x16);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x13);
  }
  else {
    operator_delete((void *)param_1[0x18]);
    bVar1 = *(byte *)(param_1 + 0x13);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x10);
  }
  else {
    operator_delete((void *)param_1[0x15]);
    bVar1 = *(byte *)(param_1 + 0x10);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xd);
  }
  else {
    operator_delete((void *)param_1[0x12]);
    bVar1 = *(byte *)(param_1 + 0xd);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    operator_delete((void *)param_1[0xf]);
    bVar1 = *(byte *)(param_1 + 10);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 7);
  }
  else {
    operator_delete((void *)param_1[0xc]);
    bVar1 = *(byte *)(param_1 + 7);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[9]);
    bVar1 = *(byte *)(param_1 + 4);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    operator_delete((void *)param_1[6]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  freelocale((__locale_t)*param_1);
  return;
}

