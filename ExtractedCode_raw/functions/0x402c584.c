// rea decompile_all
// name: FUN_0402c584
// address: 0x402c584
// body: available
// range: 0x402c584-0x402c78b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x402c788 to 0x89dbd60 operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0402c584(void)

{
  if ((bRam000000000974a9e0 & 1) != 0) {
    operator_delete(pvRam000000000974a9f0);
  }
  if ((bRam000000000974a9c8 & 1) != 0) {
    operator_delete(pvRam000000000974a9d8);
  }
  if ((bRam000000000974a9b0 & 1) != 0) {
    operator_delete(pvRam000000000974a9c0);
  }
  if ((bRam000000000974a998 & 1) != 0) {
    operator_delete(pvRam000000000974a9a8);
  }
  if ((bRam000000000974a980 & 1) != 0) {
    operator_delete(pvRam000000000974a990);
  }
  if ((bRam000000000974a968 & 1) != 0) {
    operator_delete(pvRam000000000974a978);
  }
  if ((bRam000000000974a950 & 1) != 0) {
    operator_delete(pvRam000000000974a960);
  }
  if ((bRam000000000974a938 & 1) != 0) {
    operator_delete(pvRam000000000974a948);
  }
  if ((bRam000000000974a920 & 1) != 0) {
    operator_delete(pvRam000000000974a930);
  }
  if ((bRam000000000974a908 & 1) != 0) {
    operator_delete(pvRam000000000974a918);
  }
  if ((bRam000000000974a8f0 & 1) != 0) {
    operator_delete(pvRam000000000974a900);
  }
  if ((bRam000000000974a8d8 & 1) != 0) {
    operator_delete(pvRam000000000974a8e8);
  }
  if ((bRam000000000974a8c0 & 1) != 0) {
    operator_delete(pvRam000000000974a8d0);
  }
  if ((bRam000000000974a8a8 & 1) == 0) {
    return;
  }
  operator_delete(pvRam000000000974a8b8);
  return;
}

