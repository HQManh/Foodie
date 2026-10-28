// rea decompile_all
// name: MessagePack.Internal.GuidBits$$.ctor
// address: 0x73ba4f8
// body: available
// range: 0x73ba4f8-0x73ba87b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73ba878 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_GuidBits___ctor(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_09520c24 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9798);
    DAT_09520c24 = 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((int)param_3 == 0x24) {
    uVar1 = FUN_073ce630(param_2,param_3,6,0);
    *(undefined1 *)param_1 = uVar1;
    uVar1 = FUN_073ce630(param_2,param_3,4,0);
    *(undefined1 *)((long)param_1 + 1) = uVar1;
    uVar1 = FUN_073ce630(param_2,param_3,2,0);
    *(undefined1 *)((long)param_1 + 2) = uVar1;
    uVar1 = FUN_073ce630(param_2,param_3,0,0);
    *(undefined1 *)((long)param_1 + 3) = uVar1;
    if (*(char *)(param_2 + 8) == '-') {
      uVar1 = FUN_073ce630(param_2,param_3,0xb,0);
      *(undefined1 *)((long)param_1 + 4) = uVar1;
      uVar1 = FUN_073ce630(param_2,param_3,9,0);
      *(undefined1 *)((long)param_1 + 5) = uVar1;
      if (*(char *)(param_2 + 0xd) == '-') {
        uVar1 = FUN_073ce630(param_2,param_3,0x10,0);
        *(undefined1 *)((long)param_1 + 6) = uVar1;
        uVar1 = FUN_073ce630(param_2,param_3,0xe,0);
        *(undefined1 *)((long)param_1 + 7) = uVar1;
        if (*(char *)(param_2 + 0x12) == '-') {
          uVar1 = FUN_073ce630(param_2,param_3,0x13,0);
          *(undefined1 *)(param_1 + 1) = uVar1;
          uVar1 = FUN_073ce630(param_2,param_3,0x15,0);
          *(undefined1 *)((long)param_1 + 9) = uVar1;
          if (*(char *)(param_2 + 0x17) == '-') {
            uVar3 = 0x22;
            uVar4 = 0x20;
            uVar5 = 0x1e;
            uVar6 = 0x1c;
            uVar7 = 0x1a;
            uVar2 = 0x18;
            goto LAB_073ba790;
          }
        }
      }
    }
  }
  else if ((int)param_3 == 0x20) {
    uVar1 = FUN_073ce630(param_2,param_3,6,0);
    *(undefined1 *)param_1 = uVar1;
    uVar1 = FUN_073ce630(param_2,param_3,4,0);
    *(undefined1 *)((long)param_1 + 1) = uVar1;
    uVar1 = FUN_073ce630(param_2,param_3,2,0);
    *(undefined1 *)((long)param_1 + 2) = uVar1;
    uVar1 = FUN_073ce630(param_2,param_3,0,0);
    *(undefined1 *)((long)param_1 + 3) = uVar1;
    uVar1 = FUN_073ce630(param_2,param_3,10,0);
    *(undefined1 *)((long)param_1 + 4) = uVar1;
    uVar1 = FUN_073ce630(param_2,param_3,8,0);
    *(undefined1 *)((long)param_1 + 5) = uVar1;
    uVar1 = FUN_073ce630(param_2,param_3,0xe,0);
    *(undefined1 *)((long)param_1 + 6) = uVar1;
    uVar1 = FUN_073ce630(param_2,param_3,0xc,0);
    *(undefined1 *)((long)param_1 + 7) = uVar1;
    uVar1 = FUN_073ce630(param_2,param_3,0x10,0);
    *(undefined1 *)(param_1 + 1) = uVar1;
    uVar1 = FUN_073ce630(param_2,param_3,0x12,0);
    uVar3 = 0x1e;
    uVar4 = 0x1c;
    uVar5 = 0x1a;
    *(undefined1 *)((long)param_1 + 9) = uVar1;
    uVar6 = 0x18;
    uVar7 = 0x16;
    uVar2 = 0x14;
LAB_073ba790:
    uVar1 = FUN_073ce630(param_2,param_3,uVar2,0);
    *(undefined1 *)((long)param_1 + 10) = uVar1;
    uVar1 = FUN_073ce630(param_2,param_3,uVar7,0);
    *(undefined1 *)((long)param_1 + 0xb) = uVar1;
    uVar1 = FUN_073ce630(param_2,param_3,uVar6,0);
    *(undefined1 *)((long)param_1 + 0xc) = uVar1;
    uVar1 = FUN_073ce630(param_2,param_3,uVar5,0);
    *(undefined1 *)((long)param_1 + 0xd) = uVar1;
    uVar1 = FUN_073ce630(param_2,param_3,uVar4,0);
    *(undefined1 *)((long)param_1 + 0xe) = uVar1;
    uVar1 = FUN_073ce630(param_2,param_3,uVar3,0);
    *(undefined1 *)((long)param_1 + 0xf) = uVar1;
    return;
  }
  thunk_FUN_03fc39d4(&DAT_09188180);
  uVar2 = thunk_FUN_03f9944c();
  uVar3 = thunk_FUN_03fc39d4(&DAT_09205218);
  MessagePack_MessagePackSerializationException___ctor(uVar2,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091ce4c0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar3);
}

