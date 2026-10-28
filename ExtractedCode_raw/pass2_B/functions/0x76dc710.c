// rea decompile_all
// name: Newtonsoft.Json.Linq.JContainer$$ReadContentFrom
// address: 0x76dc710
// body: available
// range: 0x76dc710-0x76dcb2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76dca7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dcb28 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JContainer__ReadContentFrom(long *param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined4 local_64;
  
  if ((DAT_095227bb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185f18);
    FUN_03f5c2a4(&DAT_09187200);
    FUN_03f5c2a4(&DAT_09187208);
    FUN_03f5c2a4(&DAT_09187220);
    FUN_03f5c2a4(&DAT_09187230);
    FUN_03f5c2a4(&DAT_09187278);
    FUN_03f5c2a4(&DAT_092214a0);
    DAT_095227bb = 1;
  }
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_2,DAT_092214a0,0);
  uVar2 = thunk_FUN_03f99350(param_2,DAT_09185f18);
  plVar9 = param_1;
  do {
    if (plVar9 != (long *)0x0) {
      if ((*(byte *)(DAT_09187230 + 0x130) <= *(byte *)(*plVar9 + 0x130)) &&
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(DAT_09187230 + 0x130) * 8 + -8) ==
          DAT_09187230)) {
        if (plVar9[0xb] == 0) goto LAB_076dca7c;
        if (*(long *)(plVar9[0xb] + 0x10) != 0) {
          if (plVar9 == param_1) {
            return;
          }
          plVar9 = (long *)plVar9[2];
        }
      }
    }
    if (param_2 == (long *)0x0) goto LAB_076dca7c;
    uVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    plVar4 = plVar9;
    switch(uVar1) {
    case 0:
      break;
    case 1:
      plVar4 = (long *)thunk_FUN_03f9944c(DAT_09187220);
      Newtonsoft_Json_Linq_JObject___ctor();
      goto joined_r0x076dca10;
    case 2:
      plVar4 = (long *)thunk_FUN_03f9944c(DAT_09187200);
      Newtonsoft_Json_Linq_JArray___ctor(plVar4,0);
      goto joined_r0x076dca10;
    case 3:
      plVar4 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
      if (plVar4 == (long *)0x0) goto LAB_076dca7c;
      uVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      plVar4 = (long *)thunk_FUN_03f9944c(DAT_09187208);
      Newtonsoft_Json_Linq_JConstructor___ctor(plVar4,uVar7);
joined_r0x076dca10:
      if ((plVar4 == (long *)0x0) ||
         (Newtonsoft_Json_Linq_JToken__SetLineInfo(plVar4,uVar2,param_3), plVar9 == (long *)0x0)) {
LAB_076dca7c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar9 + 0x6e8))(plVar9,plVar4,*(undefined8 *)(*plVar9 + 0x6f0));
      break;
    case 4:
      plVar4 = (long *)Newtonsoft_Json_Linq_JContainer__ReadProperty(param_2,param_3,uVar2,plVar9);
      if (plVar4 == (long *)0x0) {
        Newtonsoft_Json_JsonReader__Skip(param_2,0);
        plVar4 = plVar9;
      }
      break;
    case 5:
      if ((param_3 != 0) && (*(int *)(param_3 + 0x10) == 1)) {
        plVar5 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        if (plVar5 == (long *)0x0) goto LAB_076dca7c;
        uVar7 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        lVar3 = Newtonsoft_Json_Linq_JValue__CreateComment(uVar7,0);
        goto joined_r0x076dc8e0;
      }
      break;
    default:
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      FUN_039b1d98(param_2);
      local_64 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
      uVar7 = thunk_FUN_03fc39d4(&DAT_09187478);
      uVar7 = FUN_03f5c42c(uVar7,&local_64);
      uVar8 = thunk_FUN_03fc39d4(&DAT_0920ed58);
      uVar2 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar2,uVar7,0);
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar7 = thunk_FUN_03f9944c();
      System_InvalidOperationException___ctor(uVar7,uVar2,0);
      uVar2 = thunk_FUN_03fc39d4(&DAT_091d1240);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar2);
    case 7:
    case 8:
    case 9:
    case 10:
    case 0x10:
    case 0x11:
      uVar7 = (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
      lVar3 = thunk_FUN_03f9944c(DAT_09187278);
      Newtonsoft_Json_Linq_JValue___ctor(lVar3,uVar7,0);
      goto joined_r0x076dc8e0;
    case 0xb:
      lVar3 = Newtonsoft_Json_Linq_JValue__CreateNull(0);
      goto joined_r0x076dc8e0;
    case 0xc:
      lVar3 = Newtonsoft_Json_Linq_JValue__CreateUndefined(0);
joined_r0x076dc8e0:
      if ((lVar3 == 0) ||
         (Newtonsoft_Json_Linq_JToken__SetLineInfo(lVar3,uVar2,param_3), plVar9 == (long *)0x0))
      goto LAB_076dca7c;
      (**(code **)(*plVar9 + 0x6e8))(plVar9,lVar3,*(undefined8 *)(*plVar9 + 0x6f0));
      break;
    case 0xd:
    case 0xe:
    case 0xf:
      if (plVar9 == param_1) {
        return;
      }
      if (plVar9 == (long *)0x0) goto LAB_076dca7c;
      plVar4 = (long *)plVar9[2];
    }
    plVar9 = plVar4;
    uVar6 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
    if ((uVar6 & 1) == 0) {
      return;
    }
  } while( true );
}

