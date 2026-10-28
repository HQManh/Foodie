// rea decompile_all
// name: Newtonsoft.Json.JsonValidatingReader$$ValidateEndObject
// address: 0x76773c4
// body: available
// range: 0x76773c4-0x767772f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7677714 to 0x7672e28 Newtonsoft.Json.JsonValidatingReader$$RaiseError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x767772c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonValidatingReader__ValidateEndObject(long param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_095224a0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_0919f4d0);
    FUN_03f5c2a4(&DAT_091c93c8);
    FUN_03f5c2a4(&DAT_091ca1b0);
    FUN_03f5c2a4(&DAT_091cb360);
    FUN_03f5c2a4(&DAT_091780d8);
    FUN_03f5c2a4(&DAT_09178468);
    FUN_03f5c2a4(&DAT_091780e0);
    FUN_03f5c2a4(&DAT_091ec108);
    FUN_03f5c2a4(&DAT_091ec110);
    FUN_03f5c2a4(&DAT_091ec118);
    FUN_03f5c2a4(&DAT_09192040);
    FUN_03f5c2a4(&DAT_091f86e8);
    FUN_03f5c2a4(&DAT_0920bdd8);
    DAT_095224a0 = 1;
  }
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x98) + 0x20);
    if (lVar5 != 0) {
      uVar1 = FUN_06f81ffc(lVar5,DAT_0919f4d0);
      if (*(int *)(DAT_09192040 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09192040);
      }
      puVar4 = *(undefined8 **)(DAT_09192040 + 0xb8);
      lVar6 = puVar4[4];
      if (lVar6 == 0) {
        if (*(int *)(DAT_09192040 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09192040);
          puVar4 = *(undefined8 **)(DAT_09192040 + 0xb8);
        }
        uVar7 = *puVar4;
        lVar6 = thunk_FUN_03f9944c(DAT_09178468);
        FUN_05311eac(lVar6,uVar7,DAT_091ec108,0);
        plVar2 = (long *)(*(long *)(DAT_09192040 + 0xb8) + 0x20);
        *plVar2 = lVar6;
        thunk_FUN_03f5d7b8(plVar2,lVar6);
      }
      uVar3 = FUN_04ab5cb8(uVar1,lVar6,DAT_091c93c8);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(DAT_09192040 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar4 = *(undefined8 **)(DAT_09192040 + 0xb8);
        lVar6 = puVar4[5];
        if (lVar6 == 0) {
          if (*(int *)(DAT_09192040 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar4 = *(undefined8 **)(DAT_09192040 + 0xb8);
          }
          uVar1 = *puVar4;
          lVar6 = thunk_FUN_03f9944c(DAT_091780d8);
          FUN_05306edc(lVar6,uVar1,DAT_091ec110,0);
          plVar2 = (long *)(*(long *)(DAT_09192040 + 0xb8) + 0x28);
          *plVar2 = lVar6;
          thunk_FUN_03f5d7b8(plVar2,lVar6);
        }
        uVar1 = FUN_04b094b4(lVar5,lVar6,DAT_091cb360);
        if (*(int *)(DAT_09192040 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09192040);
        }
        puVar4 = *(undefined8 **)(DAT_09192040 + 0xb8);
        lVar5 = puVar4[6];
        if (lVar5 == 0) {
          if (*(int *)(DAT_09192040 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09192040);
            puVar4 = *(undefined8 **)(DAT_09192040 + 0xb8);
          }
          uVar7 = *puVar4;
          lVar5 = thunk_FUN_03f9944c(DAT_091780e0);
          FUN_053078b4(lVar5,uVar7,DAT_091ec118,0);
          plVar2 = (long *)(*(long *)(DAT_09192040 + 0xb8) + 0x30);
          *plVar2 = lVar5;
          thunk_FUN_03f5d7b8(plVar2,lVar5);
        }
        uVar1 = FUN_04aec134(uVar1,lVar5,DAT_091ca1b0);
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182ff8);
        }
        uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar1 = System_String__Join(DAT_091f86e8,uVar1,0);
        uVar1 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_0920bdd8,uVar7,uVar1,0);
        Newtonsoft_Json_JsonValidatingReader__RaiseError(param_1,uVar1);
        return;
      }
    }
  }
  return;
}

