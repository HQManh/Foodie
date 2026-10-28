// rea decompile_all
// name: System.DateTimeParse$$TryParseExactMultiple
// address: 0x75a22c4
// body: available
// range: 0x75a22c4-0x75a252f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a252c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_DateTimeParse__TryParseExactMultiple
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined4 param_5,
          long param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_09521c35 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835a8);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_0920dc90);
    FUN_03f5c2a4(&DAT_0920dc78);
    FUN_03f5c2a4(&DAT_0921ba80);
    FUN_03f5c2a4(&DAT_09202db0);
    DAT_09521c35 = 1;
  }
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (param_3 == 0) {
    System_DateTimeResult__SetFailure(param_6,1,DAT_0920dc78,0,DAT_0921ba80,0);
  }
  else {
    if ((int)param_2 == 0) {
      uVar1 = 3;
      puVar4 = &DAT_0920dc90;
    }
    else {
      uVar2 = *(ulong *)(param_3 + 0x18);
      if (uVar2 != 0) {
        if (0 < (int)uVar2) {
          lVar5 = 0;
          do {
            if ((uint)uVar2 <= (uint)lVar5) {
LAB_075a252c:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar3 = *(long *)(param_3 + 0x20 + lVar5 * 8);
            if ((lVar3 == 0) || (*(int *)(lVar3 + 0x10) == 0)) {
              System_DateTimeResult__SetBadFormatSpecifierFailure(param_6,0);
              return 0;
            }
            uStack_d8 = 0;
            local_e0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_b8 = 0;
            local_c0 = 0;
            local_a8 = 0;
            uStack_b0 = 0;
            uStack_98 = 0;
            local_a0 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
            uStack_78 = 0;
            local_80 = 0;
            uStack_68 = 0;
            uStack_70 = 0;
            System_DateTimeResult__Init(&local_e0,param_1,param_2,0);
            local_c0 = CONCAT44(*(undefined4 *)(param_6 + 0x24),(undefined4)local_c0);
            if (*(uint *)(param_3 + 0x18) <= (uint)lVar5) goto LAB_075a252c;
            uVar2 = *(ulong *)(param_3 + 0x20 + lVar5 * 8);
            if (DAT_09519f66 == '\0') {
              FUN_03f5c2a4(&DAT_091b97b8);
              DAT_09519f66 = '\x01';
              if (uVar2 == 0) goto LAB_075a2420;
LAB_075a23f0:
              uVar1 = System_String__GetRawStringData(uVar2,0);
              uVar2 = (ulong)*(uint *)(uVar2 + 0x10);
            }
            else {
              if (uVar2 != 0) goto LAB_075a23f0;
LAB_075a2420:
              uVar1 = 0;
            }
            if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = System_DateTimeParse__TryParseExact
                              (param_1,param_2,uVar1,uVar2,param_4,param_5,&local_e0);
            if ((uVar2 & 1) != 0) {
              *(undefined8 *)(param_6 + 0x38) = local_a8;
              *(undefined8 *)(param_6 + 0x28) = uStack_b8;
              return 1;
            }
            uVar2 = (ulong)*(uint *)(param_3 + 0x18);
            lVar5 = lVar5 + 1;
          } while ((int)lVar5 < (int)*(uint *)(param_3 + 0x18));
        }
        System_DateTimeResult__SetBadDateTimeFailure(param_6,0);
        return 0;
      }
      uVar1 = 2;
      puVar4 = &DAT_09202db0;
    }
    System_DateTimeResult__SetFailure(param_6,uVar1,*puVar4,0);
  }
  return 0;
}

