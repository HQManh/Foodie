// rea decompile_all
// name: AFMiniJSON.Json.Serializer$$SerializeString
// address: 0x4055060
// body: available
// range: 0x4055060-0x4055337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4055330 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4055334 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AFMiniJSON_Json_Serializer__SerializeString(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int local_64;
  
  if ((DAT_09515b3b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09214678);
    FUN_03f5c2a4(&DAT_09214690);
    FUN_03f5c2a4(&DAT_092146d0);
    FUN_03f5c2a4(&DAT_092145e8);
    FUN_03f5c2a4(&DAT_09214688);
    FUN_03f5c2a4(&DAT_092146b8);
    FUN_03f5c2a4(&DAT_092146d8);
    FUN_03f5c2a4(&DAT_09225b40);
    FUN_03f5c2a4(&DAT_09214658);
    DAT_09515b3b = 1;
  }
  local_64 = 0;
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (System_Text_StringBuilder__Append(*(long *)(param_1 + 0x10),0x22,0), param_2 != 0)) &&
     (lVar2 = System_String__ToCharArray(param_2,0), lVar2 != 0)) {
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar7 = 0;
      uVar5 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar1 = *(ushort *)(lVar2 + 0x20 + uVar7 * 2);
        if (uVar1 < 0xc) {
          if (uVar1 == 8) {
            lVar3 = *(long *)(param_1 + 0x10);
            if (lVar3 == 0) goto LAB_04055330;
            puVar6 = &DAT_09214678;
          }
          else {
            if (uVar1 != 9) {
              if (uVar1 != 10) goto LAB_04055220;
              lVar3 = *(long *)(param_1 + 0x10);
              uVar4 = DAT_09214690;
              goto joined_r0x040552ac;
            }
            lVar3 = *(long *)(param_1 + 0x10);
            if (lVar3 == 0) goto LAB_04055330;
            puVar6 = &DAT_092146d0;
          }
          uVar4 = *puVar6;
LAB_040552cc:
          System_Text_StringBuilder__Append(lVar3,uVar4,0);
        }
        else {
          if (uVar1 < 0x22) {
            if (uVar1 == 0xc) {
              lVar3 = *(long *)(param_1 + 0x10);
              uVar4 = DAT_09214688;
            }
            else {
              if (uVar1 != 0xd) goto LAB_04055220;
              lVar3 = *(long *)(param_1 + 0x10);
              uVar4 = DAT_092146b8;
            }
joined_r0x040552ac:
            if (lVar3 != 0) goto LAB_040552cc;
            goto LAB_04055330;
          }
          if (uVar1 == 0x5c) {
            lVar3 = *(long *)(param_1 + 0x10);
            uVar4 = DAT_09214658;
            goto joined_r0x040552ac;
          }
          if (uVar1 == 0x22) {
            lVar3 = *(long *)(param_1 + 0x10);
            uVar4 = DAT_092145e8;
            goto joined_r0x040552ac;
          }
LAB_04055220:
          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          local_64 = System_Convert__ToInt32(uVar1,0);
          lVar3 = *(long *)(param_1 + 0x10);
          if (local_64 - 0x7fU < 0xffffffa1) {
            if (lVar3 != 0) {
              System_Text_StringBuilder__Append(lVar3,DAT_092146d8,0);
              lVar3 = *(long *)(param_1 + 0x10);
              uVar4 = System_Int32__ToString(&local_64,DAT_09225b40,0);
              goto joined_r0x040552ac;
            }
            goto LAB_04055330;
          }
          if (lVar3 == 0) goto LAB_04055330;
          System_Text_StringBuilder__Append(lVar3,uVar1,0);
        }
        uVar5 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      System_Text_StringBuilder__Append(*(long *)(param_1 + 0x10),0x22,0);
      return;
    }
  }
LAB_04055330:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

