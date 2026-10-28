// rea decompile_all
// name: Newtonsoft.Json.Schema.JsonSchemaModel$$Combine
// address: 0x76d1288
// body: available
// range: 0x76d1288-0x76d15fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76d15e0 to 0x4a65750 FUN_04a65750 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76d15f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Schema_JsonSchemaModel__Combine(long param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  if ((DAT_09522755 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4e88);
    FUN_03f5c2a4(&DAT_091c4eb8);
    FUN_03f5c2a4(&DAT_09187250);
    FUN_03f5c2a4(&DAT_091adfa8);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917c598);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091b6a50);
    FUN_03f5c2a4(&DAT_091b7030);
    FUN_03f5c2a4(&DAT_091b7038);
    DAT_09522755 = 1;
  }
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (param_2 != 0) {
        *(bool *)(param_1 + 0x10) = 0xff < *(ushort *)(param_2 + 0x20);
        goto LAB_076d135c;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x10) = 1;
      if (param_2 != 0) {
LAB_076d135c:
        uVar3 = 0x7f;
        if ((*(ulong *)(param_2 + 0x30) & 0xff) != 0) {
          uVar3 = (uint)(*(ulong *)(param_2 + 0x30) >> 0x20);
        }
        *(uint *)(param_1 + 0x14) = uVar3 & *(uint *)(param_1 + 0x14);
        uVar2 = Newtonsoft_Json_Utilities_MathUtils__Max
                          (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x40),0);
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        uVar2 = Newtonsoft_Json_Utilities_MathUtils__Min
                          (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x48),0);
        *(undefined8 *)(param_1 + 0x20) = uVar2;
        auVar7 = Newtonsoft_Json_Utilities_MathUtils__Max
                           (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                            *(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58),0);
        *(undefined1 (*) [16])(param_1 + 0x28) = auVar7;
        auVar7 = Newtonsoft_Json_Utilities_MathUtils__Max
                           (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                            *(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68),0);
        *(undefined1 (*) [16])(param_1 + 0x38) = auVar7;
        auVar7 = Newtonsoft_Json_Utilities_MathUtils__Max
                           (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                            *(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x78),0);
        *(undefined1 (*) [16])(param_1 + 0x48) = auVar7;
        if (*(char *)(param_1 + 0x58) == '\0') {
          bVar1 = 0xff < *(ushort *)(param_2 + 0x80);
        }
        else {
          bVar1 = true;
        }
        *(bool *)(param_1 + 0x58) = bVar1;
        if (*(char *)(param_1 + 0x59) == '\0') {
          bVar1 = 0xff < *(ushort *)(param_2 + 0x82);
        }
        else {
          bVar1 = true;
        }
        *(bool *)(param_1 + 0x59) = bVar1;
        uVar2 = Newtonsoft_Json_Utilities_MathUtils__Max
                          (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_2 + 0x84),0);
        *(undefined8 *)(param_1 + 0x5c) = uVar2;
        uVar2 = Newtonsoft_Json_Utilities_MathUtils__Min
                          (*(undefined8 *)(param_1 + 100),*(undefined8 *)(param_2 + 0x8c),0);
        *(undefined8 *)(param_1 + 100) = uVar2;
        if (*(char *)(param_1 + 0xa0) == '\0') {
          bVar1 = *(char *)(param_2 + 0xa0) != '\0';
        }
        else {
          bVar1 = true;
        }
        *(bool *)(param_1 + 0xa0) = bVar1;
        if (*(char *)(param_1 + 0xa1) == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = *(char *)(param_2 + 0xd0) != '\0';
        }
        *(bool *)(param_1 + 0xa1) = bVar1;
        if (*(char *)(param_1 + 0xa2) == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = *(char *)(param_2 + 0xb0) != '\0';
        }
        *(bool *)(param_1 + 0xa2) = bVar1;
        if (*(char *)(param_1 + 0xa3) == '\0') {
          bVar1 = *(char *)(param_2 + 0xb1) != '\0';
        }
        else {
          bVar1 = true;
        }
        lVar4 = *(long *)(param_2 + 0xe0);
        *(bool *)(param_1 + 0xa3) = bVar1;
        if (lVar4 != 0) {
          plVar6 = (long *)(param_1 + 0xa8);
          lVar5 = *plVar6;
          if (lVar5 == 0) {
            lVar4 = thunk_FUN_03f9944c(DAT_0917c598);
            FUN_057e0400(lVar4,DAT_091adfa8);
            *plVar6 = lVar4;
            thunk_FUN_03f5d7b8(plVar6,lVar4);
            lVar5 = *plVar6;
            lVar4 = *(long *)(param_2 + 0xe0);
          }
          if (*(int *)(DAT_09187250 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = Newtonsoft_Json_Linq_JToken__get_EqualityComparer(0);
          FUN_04a66318(lVar5,lVar4,uVar2,DAT_091c4eb8);
        }
        lVar4 = *(long *)(param_2 + 0x38);
        *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) | *(uint *)(param_2 + 0xec);
        if (lVar4 == 0) {
          return;
        }
        plVar6 = (long *)(param_1 + 0x70);
        lVar5 = *plVar6;
        if (lVar5 == 0) {
          lVar4 = thunk_FUN_03f9944c(DAT_0917cce8);
          FUN_057e0400(lVar4,DAT_091b0558);
          *plVar6 = lVar4;
          thunk_FUN_03f5d7b8(plVar6,lVar4);
          lVar5 = *plVar6;
          lVar4 = *(long *)(param_2 + 0x38);
        }
        FUN_04a65750(lVar5,lVar4,DAT_091c4e88);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

