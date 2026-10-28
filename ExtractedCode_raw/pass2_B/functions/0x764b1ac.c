// rea decompile_all
// name: Newtonsoft.Json.JsonSerializer$$SetupReader
// address: 0x764b1ac
// body: available
// range: 0x764b1ac-0x764b57f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x764b57c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonSerializer__SetupReader
               (long param_1,long *param_2,long *param_3,undefined8 *param_4,undefined8 *param_5,
               undefined8 *param_6,ulong *param_7,long *param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_58;
  
  if ((DAT_09522344 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183878);
    FUN_03f5c2a4(&DAT_09187460);
    FUN_03f5c2a4(&DAT_091b6c28);
    FUN_03f5c2a4(&DAT_091b6fa0);
    FUN_03f5c2a4(&DAT_091b6df0);
    FUN_03f5c2a4(&DAT_091b6c90);
    FUN_03f5c2a4(&DAT_091b6c88);
    FUN_03f5c2a4(&DAT_091b6de8);
    FUN_03f5c2a4(&DAT_091b6c20);
    FUN_03f5c2a4(&DAT_091b6df8);
    FUN_03f5c2a4(&DAT_091b6c98);
    FUN_03f5c2a4(&DAT_091b6fb8);
    FUN_03f5c2a4(&DAT_091b6c30);
    DAT_09522344 = 1;
  }
  plVar4 = *(long **)(param_1 + 0xb0);
  if (plVar4 == (long *)0x0) {
LAB_0764b2c0:
    lVar3 = 0;
    *param_3 = 0;
  }
  else {
    if (param_2 == (long *)0x0) goto LAB_0764b57c;
    uVar1 = Newtonsoft_Json_JsonReader__get_Culture(param_2);
    uVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,uVar1,*(undefined8 *)(*plVar4 + 0x140));
    if ((uVar2 & 1) != 0) goto LAB_0764b2c0;
    lVar3 = Newtonsoft_Json_JsonReader__get_Culture(param_2);
    *param_3 = lVar3;
    thunk_FUN_03f5d7b8(param_3,lVar3);
    lVar3 = *(long *)(param_1 + 0xb0);
    param_3 = param_2 + 8;
    *param_3 = lVar3;
  }
  thunk_FUN_03f5d7b8(param_3,lVar3);
  if (*(char *)(param_1 + 0x88) == '\0') {
LAB_0764b320:
    *param_4 = 0;
  }
  else {
    if (param_2 == (long *)0x0) goto LAB_0764b57c;
    if (((*(ulong *)(param_1 + 0x88) & 0xff) != 0) &&
       ((int)param_2[9] == (int)(*(ulong *)(param_1 + 0x88) >> 0x20))) goto LAB_0764b320;
    local_58 = 0;
    FUN_05c30b18(&local_58,(int)param_2[9],DAT_091b6c88);
    *param_4 = local_58;
    Newtonsoft_Json_JsonReader__set_DateTimeZoneHandling(param_2,*(undefined4 *)(param_1 + 0x8c));
  }
  if (*(char *)(param_1 + 0x90) == '\0') {
LAB_0764b37c:
    *param_5 = 0;
  }
  else {
    if (param_2 == (long *)0x0) goto LAB_0764b57c;
    if (((*(ulong *)(param_1 + 0x90) & 0xff) != 0) &&
       ((int)param_2[0xb] == (int)(*(ulong *)(param_1 + 0x90) >> 0x20))) goto LAB_0764b37c;
    local_58 = 0;
    FUN_05c30b18(&local_58,(int)param_2[0xb],DAT_091b6c20);
    *param_5 = local_58;
    Newtonsoft_Json_JsonReader__set_DateParseHandling(param_2,*(undefined4 *)(param_1 + 0x94));
  }
  if (*(char *)(param_1 + 0xa0) == '\0') {
LAB_0764b3d8:
    *param_6 = 0;
  }
  else {
    if (param_2 == (long *)0x0) goto LAB_0764b57c;
    if (((*(ulong *)(param_1 + 0xa0) & 0xff) != 0) &&
       (*(int *)((long)param_2 + 0x5c) == (int)(*(ulong *)(param_1 + 0xa0) >> 0x20)))
    goto LAB_0764b3d8;
    local_58 = 0;
    FUN_05c30b18(&local_58,*(int *)((long)param_2 + 0x5c),DAT_091b6de8);
    *param_6 = local_58;
    Newtonsoft_Json_JsonReader__set_FloatParseHandling(param_2,*(undefined4 *)(param_1 + 0xa4));
  }
  if (*(char *)(param_1 + 0xc0) == '\0') {
LAB_0764b444:
    *param_7 = 0;
  }
  else {
    if (param_2 == (long *)0x0) goto LAB_0764b57c;
    uVar2 = *(ulong *)((long)param_2 + 0x4c);
    if (((*(ulong *)(param_1 + 0xb8) ^ uVar2) >> 0x20 == 0) &&
       (((uVar2 & 0xff) != 0) == ((*(ulong *)(param_1 + 0xb8) & 0xff) != 0))) goto LAB_0764b444;
    *param_7 = uVar2;
    Newtonsoft_Json_JsonReader__set_MaxDepth(param_2,*(undefined8 *)(param_1 + 0xb8));
  }
  if (*(char *)(param_1 + 0xd0) == '\0') {
    *param_8 = 0;
    thunk_FUN_03f5d7b8(param_8,0);
    if (param_2 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 == (long *)0x0) {
LAB_0764b57c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar4 = param_2 + 0xc;
    uVar2 = System_String__op_Inequality(*plVar4,*(undefined8 *)(param_1 + 200),0);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      *param_8 = 0;
    }
    else {
      *param_8 = *plVar4;
      thunk_FUN_03f5d7b8(param_8);
      lVar3 = *(long *)(param_1 + 200);
      *plVar4 = lVar3;
      param_8 = plVar4;
    }
    thunk_FUN_03f5d7b8(param_8,lVar3);
  }
  if ((((*(byte *)(DAT_09187460 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187460 + 0x130) * 8 + -8) ==
        DAT_09187460)) && (param_2 = param_2 + 0x19, *param_2 == 0)) &&
     (plVar4 = *(long **)(param_1 + 0x40), plVar4 != (long *)0x0)) {
    lVar3 = *plVar4;
    if ((*(byte *)(DAT_09183878 + 0x130) <= *(byte *)(lVar3 + 0x130)) &&
       (*(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(DAT_09183878 + 0x130) * 8 + -8) ==
        DAT_09183878)) {
      lVar3 = (**(code **)(lVar3 + 0x278))(plVar4,*(undefined8 *)(lVar3 + 0x280));
      *param_2 = lVar3;
      thunk_FUN_03f5d7b8(param_2,lVar3);
    }
  }
  return;
}

