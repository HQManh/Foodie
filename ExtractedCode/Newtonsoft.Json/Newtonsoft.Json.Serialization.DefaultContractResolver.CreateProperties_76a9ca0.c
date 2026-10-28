// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$CreateProperties
// address: 0x76a9ca0
// body: available
// range: 0x76a9ca0-0x76a9ebf inclusive
// range: 0x76a9f00-0x76aa04b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a9ebc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a9ff4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a9ff8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76aa040 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76aa048 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076a9ff0) */
/* WARNING: Removing unreachable block (ram,0x076a9ea4) */
/* WARNING: Removing unreachable block (ram,0x076aa044) */

void Newtonsoft_Json_Serialization_DefaultContractResolver__CreateProperties
               (long *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 local_a8;
  char *pcStack_a0;
  long *local_98;
  char local_8c [4];
  long local_88;
  undefined8 local_80;
  char *pcStack_78;
  long *local_70;
  
  if ((DAT_0952263c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca028);
    FUN_03f5c2a4(&DAT_091cb218);
    FUN_03f5c2a4(&DAT_091a3908);
    FUN_03f5c2a4(&DAT_091a3910);
    FUN_03f5c2a4(&DAT_091a3918);
    FUN_03f5c2a4(&DAT_09178c60);
    FUN_03f5c2a4(&DAT_091873b0);
    FUN_03f5c2a4(&DAT_091ae750);
    FUN_03f5c2a4(&DAT_091e8d20);
    FUN_03f5c2a4(&DAT_09190010);
    DAT_0952263c = 1;
  }
  local_80 = 0;
  pcStack_78 = (char *)0x0;
  local_70 = (long *)0x0;
  local_88 = 0;
  local_8c[0] = '\0';
  lVar1 = (**(code **)(*param_1 + 0x198))(param_1,param_2,*(undefined8 *)(*param_1 + 0x1a0));
  if (lVar1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09187420);
    uVar5 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_09209100);
    Newtonsoft_Json_JsonSerializationException___ctor(uVar5,uVar7,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091c8298);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar7);
  }
  lVar2 = (**(code **)(*param_1 + 0x278))(param_1,*(undefined8 *)(*param_1 + 0x280));
  lVar3 = thunk_FUN_03f9944c(DAT_091873b0);
  Newtonsoft_Json_Serialization_JsonPropertyCollection___ctor(lVar3,param_2);
  FUN_057e185c(&local_a8,lVar1,DAT_091ae750);
  local_70 = local_98;
  pcStack_78 = pcStack_a0;
  local_80 = local_a8;
  while( true ) {
    do {
      uVar4 = FUN_071bd28c(&local_80,DAT_091a3910);
      if ((uVar4 & 1) == 0) {
        FUN_071bd288(&local_80,DAT_091a3908);
        if (*(int *)(DAT_09190010 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar8 = *(undefined8 **)(DAT_09190010 + 0xb8);
        lVar1 = puVar8[6];
        if (lVar1 == 0) {
          if (*(int *)(DAT_09190010 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar8 = *(undefined8 **)(DAT_09190010 + 0xb8);
          }
          uVar5 = *puVar8;
          lVar1 = thunk_FUN_03f9944c(DAT_09178c60);
          FUN_053239c8(lVar1,uVar5,DAT_091e8d20,0);
          plVar6 = (long *)(*(long *)(DAT_09190010 + 0xb8) + 0x30);
          *plVar6 = lVar1;
          thunk_FUN_03f5d7b8(plVar6,lVar1);
        }
        uVar5 = FUN_04aeab54(lVar3,lVar1,DAT_091ca028);
        FUN_04b08b78(uVar5,DAT_091cb218);
        return;
      }
      lVar1 = (**(code **)(*param_1 + 0x298))
                        (param_1,local_70,param_3,*(undefined8 *)(*param_1 + 0x2a0));
    } while (lVar1 == 0);
    local_8c[0] = '\0';
    local_a8 = 0;
    pcStack_a0 = local_8c;
    local_98 = &local_88;
    local_88 = lVar2;
    System_Threading_Monitor__Enter(lVar2,local_8c,0);
    if (lVar2 == 0) break;
    uVar5 = Newtonsoft_Json_DefaultJsonNameTable__Add(lVar2,*(undefined8 *)(lVar1 + 0x30),0);
    Newtonsoft_Json_Serialization_JsonProperty__set_PropertyName(lVar1,uVar5);
    if (local_8c[0] != '\0') {
      System_Threading_Monitor__Exit(*local_98,0);
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    Newtonsoft_Json_Serialization_JsonPropertyCollection__AddProperty(lVar3,lVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

